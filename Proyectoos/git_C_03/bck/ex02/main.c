#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char src[20]="AAAA";
	char dest[20]="zyxwvutsrqponmlkji";
printf ("esta en 1");	
	//char *s = strcat(dest,src);
printf ("esta en 2");
	char *r = ft_strcat(dest,src);
	
	//printf ("resultado s: %s\n", s);
	printf ("resultado r: %s\n", r);
}
