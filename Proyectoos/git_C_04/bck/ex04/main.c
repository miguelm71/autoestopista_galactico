#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main()
{
	int nbr = 255;
	char base[20] = "0123456789ABCDEF";

	ft_putnbr_base(nbr, base);
}
