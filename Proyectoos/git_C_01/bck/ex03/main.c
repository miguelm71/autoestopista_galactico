#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main ()
{
	int a;
	int b;
	int d;
	int m;
	int *div;
	int *mod;

	a = 11;
	b = 3;
	d = 0;
	m = 0;
	div = &d;
	mod = &m;
	printf ("a: %d, b: %d, div: %d, mod: %d\n", a, b, *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf ("a: %d, b: %d, div: %d, mod: %d\n", a, b, *div, *mod);
}
