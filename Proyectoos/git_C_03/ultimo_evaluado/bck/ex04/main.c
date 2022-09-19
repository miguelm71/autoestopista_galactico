#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main ()
{
	char str[]="hola cacaracola";
	char tof[]="ola";

	printf ("1: %s\n",ft_strstr(str,tof));

	printf ("2: %s\n",strstr(str, tof));
}
