#include <stdio.h>
#include <string.h>
#include <unistd.h>


char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char src[8]="AAAABBB";
	char dest[30]="zyxwvutsrqponmlkji";
	char dest1[30]="zyxwvutsrqponmlkji";
	unsigned int n = 12;

	char *s = strncat(dest,src,n);
	char *r = ft_strncat(dest1,src,n);
	
	printf ("\nresultado s: %s\n", s);
	printf ("resultado r: %s\n", r);
}
