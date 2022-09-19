#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	ptra = &a;
	ptrb = &b;

	a = 23;
	b = 7;
	printf ("a: %d, b: %d", a , b);
	ft_ultimate_div_mod(ptra, ptrb);
	printf ("a: %d, b: %d", a , b);
}	
