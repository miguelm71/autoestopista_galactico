#include "libft.h"

char *ft_strrchr(char *s, int c)
{
	char *r;

	r = 0;
	while (s)
	{
		if (*s == c)
			r = s;
		s++;
	}
	if (c == '\0')
		r = s;
	return (r);
}