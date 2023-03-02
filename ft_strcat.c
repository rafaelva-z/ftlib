char	*ft_strcat(char *s1, char *s2)
{
	int	i;

	i = ft_strlen(s1);
	
	while (s2)
		s1[i++] = s2++;
	return (s1);
	
	//NULL Terminator?
	//else return NULL?
}
