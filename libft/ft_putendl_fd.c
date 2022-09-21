#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int l;

	l = ft_strlen(s);
	if (l > 0)
	{
		write(fd, s, l);
		write(fd, '\n', 1);
	}
}