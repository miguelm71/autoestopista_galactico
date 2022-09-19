#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(int argc, char **argv)
{
	char *str; 
	char array[40] = "\n\t\r\v\f  -+-+---345abc";
	if (argc == 2)
		str = argv[1];
	else
		str = array;
	

	printf ("resultado 1: %d\n", atoi(str));
	printf ("resultado 2: %d\n", ft_atoi(str));
}
