#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main ()
{
	char str[] = "UIOHKHJKNJKLHHJK";

	printf ("str: %s, result: %d\n", str, ft_str_is_uppercase(str));
}
