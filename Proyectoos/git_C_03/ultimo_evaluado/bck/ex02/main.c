#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char src[28]="AAAA";
	char dest[28]="zyxwvutsrqponmlkji";
	char dest2[280]="zyxwvutsrqponmlkji";

	char *s = strcat(dest2,src);
	char *r = ft_strcat(dest,src);
	
	printf ("resultado s: %s\n", s);
	printf ("resultado r: %s\n", r);
}
