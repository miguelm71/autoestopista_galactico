#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int size;
	int *miint;
	int cont;

	cont = 0;
	int mi_tab[] = {1,2,3,4,5,6,7,8};
	size = 8;
	miint = &mi_tab[0];

	ft_rev_int_tab(miint, size);

	while (cont < size)
	{
		printf ("%d", mi_tab[cont]);
		cont++;
	}
}
