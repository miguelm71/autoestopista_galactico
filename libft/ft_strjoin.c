#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t l1;
	size_t l2;
	char *r;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	r = ft_calloc(l1 + l2 + 1, sizeof(char));
	if(s1 == NULL || s2 == NULL || r == NULL)
		return (NULL);
	ft_strlcpy(r,s1,l1);
	ft_strlcat(r,s2,l2);
	return (r);
}