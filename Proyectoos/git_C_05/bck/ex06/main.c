#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb);

int main (int argc, char **argv)
{
	int nb = 4;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
	}
	printf ("result: %d\n", ft_is_prime(nb));
}
