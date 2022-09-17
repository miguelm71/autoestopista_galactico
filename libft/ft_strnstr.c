#include "libft.h"

char *ftstrstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int j;
	int k;
	if (!*s2)
		return ((char *)s1);
	i = 0;
	while ((i < len) && s1[i])
	{
		j = 0;
		k = i;
		while((k < len) && s1[k] && (s1[k] == s2[j]) )
		{
			k++;
			j++;
			if (!s2[j])
				return ((char *)(&s1[i])); 
		}
		i++;
	}
	return NULL;
}