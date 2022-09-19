#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int nb);

int main (int argc, char **argv)
{
	int nb = 3;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
	}
	printf ("result: %d\n", ft_fibonacci(nb));
}
