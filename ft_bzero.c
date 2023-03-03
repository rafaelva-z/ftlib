#include <strings.h>
#include <stdio.h>

void	bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		s[0] = '\0';
}

int	main()
{
	char *str = "HeyMAN";
	printf("STRING: %s",str);
	bzero(str, 3);
	printf("STRING: %s",str);
}

// This is wrong my dude