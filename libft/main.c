#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main ()
{
	char *r;

	r = ft_substr("hola", 4294967295, 0 );
	printf ("reslt 1: %s\n", r);
	
}