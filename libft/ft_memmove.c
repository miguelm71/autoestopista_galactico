#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t size)
{
	size_t i;

	if (dst < src)
	{
		i = 0;
		while (i < size)
		{
			*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
			i++;
		}
	}
	else{
		i = size - 1;
		while (i >= 0)
		{
			*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
			i--;
		}
	}
}