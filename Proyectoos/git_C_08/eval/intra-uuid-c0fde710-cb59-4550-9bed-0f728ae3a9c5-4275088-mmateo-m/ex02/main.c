#include <stdio.h>
#include "ft_abs.h"
#include <string.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
	(void)argc;
	int i = atoi(argv[1]);
	i = ABS(i);
	printf ("el numero es: %d\n", i);
}
