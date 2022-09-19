#include <stdio.h>

int ft_str_is_printable(char *str);
int main ()
{
	char str[] = "UIOHKHJKNJKL\tHHJK";

	printf ("str: %s, result: %d\n", str, ft_str_is_printable(str));
}
