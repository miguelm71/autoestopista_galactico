#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);


int main ()
{
	char s1[30]="Hola caRac=la";
	char s2[30]="Hola caracola";
	int r = 0;

	r = strncmp(s1,s2,10);

	printf ("s1: %s\ns2: %s\nr: %d\n",s1,s2,r);

	r = ft_strncmp(s1, s2, 10);
	printf ("s1: %s\ns2: %s\nr: %d\n",s1,s2,r);

}	
