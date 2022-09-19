#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main ()
{
	int mitab[] = {3,5,8,2,6,4,9,6,4,2,6,9,1,8,9,7,0,4,3,0,4};
	int size = 21;
	int cont = 0;

	ft_sort_int_tab(&mitab[0], size);

	while (cont < size)
	{
		printf ("%d,",mitab[cont]);
		cont++;
	}
}
	
