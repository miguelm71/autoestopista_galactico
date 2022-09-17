#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main ()
{
	char str[20] = "---+-120t00";
	char base[20] = "0123456789ABCDEF";

	int i = ft_atoi_base(str,base);
	printf("el resultaddo es: %d\n",i);

	char str2[20] = "FFFFFFFF";
	char base2[20] = "01234567089ABCDEF";

	i = ft_atoi_base(str2,base2);
	printf("el resultaddo es: %d\n",i);
}
