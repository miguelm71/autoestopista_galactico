#include <stdio.h>

char *ft_strlowcase(char *str);
int main ()
{
	char str[] = "AjakFDSAAgAg%(\tzfDdsjFDZZZSAgkfdG\0";
	printf ("str: %s\n", str);

	printf ("str: %s", ft_strlowcase(str));
}
