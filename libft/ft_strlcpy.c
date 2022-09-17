#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;
	int i;

	i = 0;
	src_len = 0;
	while (*(src + src_len) != '\0')
		src_len++;
	while ((i < (size -1)) && *(src + i))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (src_len);
}