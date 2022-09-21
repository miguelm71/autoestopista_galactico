#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int l;

	l = ft_strlen(s);
	if (l > 0)
		write (fd, s, l);
}