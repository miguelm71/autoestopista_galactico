#include <stdio.h>

char *ft_strupcase(char *str);
int main ()
{
	char str[] = "AjakgAg%(\tzfDdsjgkfdG\0";
	printf ("str: %s\n", str);

	printf ("str: %s", ft_strupcase(str));
}
