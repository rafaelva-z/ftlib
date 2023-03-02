cahr	*ft_strncat(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	
	while(s2[i] && j < n)
		s1[i++] = s2[j++];
	return (s1);
}
	//j <= n??
	//NULL terminator?
	//else return NULL?
