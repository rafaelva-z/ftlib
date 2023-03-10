/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz <rvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:02:06 by rvaz              #+#    #+#             */
/*   Updated: 2023/03/10 15:20:22 by rvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//remove this 
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *s1, char *s2, size_t  n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	
	while(s2[j] && j < n)
		s1[i++] = s2[j++];
	return (s1);
}

/*
#include <string.h>
int	main(void)
{
	int	bytes = 5;
	char	ptr[20] = "A mister";
	char	ptr2[] = "-is walking";
	char	ptr3[20] = "A mister";
	char	ptr4[] = "-is walking";
	printf("\nTEST || strncat(%s, %s, %d)\n\n", ptr, ptr2, bytes);
	printf("----------------------------------\n");
	printf("strncat   : %s | \n", strncat(ptr, ptr2, bytes));
	printf("ft_strncat: %s | \n", ft_strncat(ptr3, ptr4, bytes));
	printf("----------------------------------\n");
}
*/
