#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main ()
{
	char str[] = "fdsa\nfjdklsña\tfds.\0";;
	printf ("antes:  %s\n", str);
	ft_putstr_non_printable(str);
	printf ("despues %s\n", str);
}
