#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t to_find_l;
	if (!*little)
		return ((char *)big);
	i = 0;
	to_find_l = ft_strlen(little);
	while (*big != '\0' && (len-- >= to_find_l))
	{
		if (ft_strncmp(big,little,to_find_l) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}