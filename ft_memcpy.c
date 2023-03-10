/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz <rvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:36:54 by rvaz              #+#    #+#             */
/*   Updated: 2023/03/10 16:36:54 by rvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while(n-- > 0)
		*ptr++ = c;
	*ptr = 0;
	return (s);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dptr;
	unsigned char	*sptr;
	size_t	i;
	int n_n;

	dptr = dest;
	sptr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		n_n = sptr[i++];
		ft_memset(dptr++, n_n, 1);
	}
	return (dest);
}

#include <string.h>
int	main()
{
	size_t bytes = 2;
	
	unsigned char ptr[] = "Hello";
	unsigned char ptr2[bytes];
	unsigned char ptr3[] = "Hello";
	unsigned char ptr4[bytes];
	printf("\nTEST || memcpy(%s, %s, %ld)\n\n",ptr2, ptr, bytes);
	printf("----------------------------------\n");
	printf("memcpy: %s\n", (unsigned char *)memcpy(ptr2, ptr, bytes));
	printf("ft_memcpy: %s\n", (unsigned char *)ft_memcpy(ptr2, ptr, bytes));
	printf("----------------------------------\n");


	unsigned int int_ptr[] = {1,2};
	unsigned int int_ptr2[bytes];
	unsigned int int_ptr3[] = {1,2};
	unsigned int int_ptr4[bytes];
	printf("\nTEST || memcpy INT array\n");
	printf("----------------------------------\n");
	memcpy(int_ptr2, int_ptr, bytes);
	ft_memcpy(int_ptr4, int_ptr, bytes);
	printf("memcpy:");
	for(int i = 0; i < bytes; i++)
		printf("%d ", int_ptr2[i]);
	printf("\n");
	printf("ft_memcpy:");
	for(int i = 0; i < bytes; i++)
		printf("%d ", int_ptr4[i]);
	//printf( int_ptr4[]
	printf("\n");
	printf("----------------------------------\n");
}

