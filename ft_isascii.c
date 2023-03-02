int	ft_isascii(char c)
{
	if (c > 0 && c < 128)
		return (1);
	return (0);
}
