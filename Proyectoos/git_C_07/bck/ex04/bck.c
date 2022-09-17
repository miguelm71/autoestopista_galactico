char	*ft_strcpy(char *dst, char*src)
{
	while (*src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
	}
	return (dst);
}

int get_res_len(int nbr, char* base)
{
	int i;
	int base_len;

	base_len = get_len(base);
	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / base_len;
		i++;
	}
	return (i);
}

char * ft_get_mem(int nbr_i, char * base)
{
	char *r;
	int		len;
	int		i;

	len = get_res_len(nbr_i, base) + 2;
	r = malloc(sizeof(char) * len);
	i = -1;
	while (++i < len)
		r[i] = '\0';
	return (r);
}