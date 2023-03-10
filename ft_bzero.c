/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz <rvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:20:09 by rvaz              #+#    #+#             */
/*   Updated: 2023/03/10 15:20:09 by rvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove this
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*ptr++ = c;
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
#include <strings.h>
#include <stdio.h>
int	main()
{
	size_t count = 0;
	unsigned char str[] = "HeyMAN";

	printf("STRING: %s\n\n",str);
	ft_bzero(str, 2);
	
	while (count < 10)
		printf("char %ld: %c\n", count, str[count++]);
}
*/