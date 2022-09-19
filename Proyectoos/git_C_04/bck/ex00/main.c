#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_strlen(char *str);

int main()
{
	char str[30]="123456789012345678901234567";

	int i1 = strlen(str);
	int i2 = ft_strlen(str);
	
	printf ("resultado i1: %d\n", i1);
	printf ("resultado i2: %d\n", i2);
}
