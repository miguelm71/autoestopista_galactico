#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquAnte+et+uni\0";	

	printf ("antes:   %s\n", str);
	ft_strcapitalize(str);
	printf ("despues: %s\n", str);
}
