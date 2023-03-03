#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_isdigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


static int ft_isspace(char c)
{
	if (c == 0 || c >= 9 && c <= 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	result;
	int	i;
	int signal = 1;

	result = 0;
	i = 0;
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

int	main(void)
{
	printf("FINAL: %d\n", ft_atoi("   \n \t\t \r99987.55"));
}