#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
	char *str;
	int i;
	int n;

	i = argc;
	str = argv[1];
	write(1,"0\n",2);
	n = ft_atoi(str);
	printf ("i: %d\n", n);
	str = ft_itoa(n);
	printf ("r: %s\n", str);
}