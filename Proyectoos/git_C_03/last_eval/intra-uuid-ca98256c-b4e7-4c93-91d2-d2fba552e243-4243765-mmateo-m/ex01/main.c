#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int orig_ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	char *s1="holar";
	char *s2="holas";
	int r = 5;

	r = strncmp(s1,s2,r);

	printf ("s1: %s\ns2: %s\n",s1,s2);

	printf ("strncmp. r: %d\n", strncmp(s1, s2, r));
	printf ("ft_strncmp: r: %d\n", ft_strncmp(s1, s2, r));
//	printf ("orig_ft_str: r: %d\n", orig_ft_strncmp(s1, s2, r));

}	
