#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char *str;

	str = "Hola caracola";
	printf ("str: %s, cont: %d", str, ft_strlen(str));
}
