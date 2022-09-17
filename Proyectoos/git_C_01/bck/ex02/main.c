#include <stdio.h>

void ft_swap(int *a, int *b);

int main ()
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	a = 3;
	b = 7;
	ptra = &a;
	ptrb = &b;

	printf ("a: %d, b: %d\n", a, b);
	ft_swap(ptra, ptrb);
	printf ("a: %d, b: %d\n", a, b);
}
