#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	int l;

	str = malloc (sizeof(char) * (len + 1));
	if (!s || str == NULL)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	while ((start < l) && (s[i] != '\0') && (i < len))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}