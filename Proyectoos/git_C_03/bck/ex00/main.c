#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);


int main ()
{
	char s1[]={45,65,78,123,52,122,0};
	char s2[]={45,65,78,123,52,172,0};
	int r = 0;

	r = strcmp(s1,s2);

	printf ("s1: %s\ns2: %s\nr: %d\n",s1,s2,r);

	r = ft_strcmp(s1, s2);
	printf ("s1: %s\ns2: %s\nr: %d\n",s1,s2,r);
}	
