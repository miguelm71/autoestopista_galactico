#include <stdio.h>
#include <string.h>
#include <unistd.h>


char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char pp[30]="YYYYYYYYYYYYYYYYY";
	char src[8]="AAAABBB";
	char kk[30]="QQQQQQQQQQQQQQQQQQ";
	char dest[30]="zyxwvutsrqponmlkji";
	char dest1[30]="zyxwvutsrqponmlkji";
	unsigned int n = 6;

	char *s = strncat(dest,src,n);
	char *r = ft_strncat(dest1,src,n);
	
	printf ("\nresultado s: %s\n", s);
	printf ("resultado r: %s\n", r);
write (1, s, 40);
write (1, "\n", 1);
write (1, r, 40);
	if (kk[0] == pp[0])
		return (1);
}
