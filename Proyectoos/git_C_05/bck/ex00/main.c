#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int  nb);

int main(int argc, char **argv)
{
	int  nb;

	if (argc == 2)
		nb = atoi(argv[1]);
	else
		nb = 3;

	printf("result: %d\n",ft_iterative_factorial(nb));
}
