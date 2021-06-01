int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && *s2 != '\0') && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
