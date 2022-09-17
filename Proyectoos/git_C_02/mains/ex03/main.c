#include <stdio.h>

int ft_str_is_numeric(char *str);

int main ()
{
	char str[] = "";

	printf ("str: %s, result: %d\n", str, ft_str_is_numeric(str));
}
