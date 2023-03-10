/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz <rvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:20:10 by rvaz              #+#    #+#             */
/*   Updated: 2023/03/10 15:20:10 by rvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove this
int	ft_isdigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	ft_isspace(char c)
{
	if (c == 0 || c >= 9 && c <= 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	result;
	int			i;
	int			signal;

	result = 0;
	i = 0;
	signal = 1;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		signal = -signal;
		i++;
	}
	while (ft_isdigit(nptr[i]) == 1 && nptr[i])
		result = (result * 10) + (nptr[i++] - '0');
	return (result * signal);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("FINAL: %d\n", ft_atoi("   \n \t\t \r99987.55"));
}
*/