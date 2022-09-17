#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main ()
{
	char str[20] = "  -+--1024";
	char base_from[20] = "0123456789";
	char base_to[20]= "0123456789ABCDEF";
	char *res;

	res = ft_convert_base(str,base_from, base_to);
	printf ("number: %s, base_to: %s, base_from: %s, res: %s\n",str, base_to, base_from, res);
	
}

