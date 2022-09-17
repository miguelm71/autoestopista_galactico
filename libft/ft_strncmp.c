#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i;

	if (n == 0)
		return (0);
	i = 0;
	while (*str1 && *str2 && (i < n))
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			i++;
		}
		else
			return ((unsigned char)(*str1)) - ((unsigned char)(*str2));
	}
	return(0);
}