#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main ()
{
	char str[]="hola cacaracola\0";
	char tof[]="a c\0";

	printf ("1: %s\n",ft_strstr(str,tof));

	printf ("2: %s\n",strstr(str, tof));
}
