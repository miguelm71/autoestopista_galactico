#include "libft.h"

char *ft_strdup(const char *s)
{
	int len;
	char *n;
	int i;

	len = ft_strlen(s);
	n = (char *)malloc (sizeof(char) * (len + 1));
	if (n = NULL)
		return NULL;
	i = 0;
	while (i < len)
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}