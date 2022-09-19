int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int r = 0;

	i = 0;
	while ((s1[i] || s2[i]) && r == 0 && i < n)
	{
		if (s1[i] != s2[i])
			r = s1[i] - s2[i];
		i++;
	}
	return (r);
}

int orig_ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((*s1 != '\0' || *s2 != '\0') && (*s1 == *s2) && (i < n))
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
