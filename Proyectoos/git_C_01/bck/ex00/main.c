#include <stdio.h>

void ft_ft(int *nbr);

int main (void)
{
	int a;

	a = 56;
	ft_ft(&a);
	printf ("el num es: %d", a);
}
