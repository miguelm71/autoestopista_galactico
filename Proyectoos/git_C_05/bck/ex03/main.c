#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power);

int main (int argc, char **argv)
{
	int nb = 2;
	int power = 4;

	if (argc == 3)
	{
		nb = atoi(argv[1]);
		power = atoi(argv[2]);
	}

	printf ("result: %d\n", ft_recursive_power(nb, power));
}
