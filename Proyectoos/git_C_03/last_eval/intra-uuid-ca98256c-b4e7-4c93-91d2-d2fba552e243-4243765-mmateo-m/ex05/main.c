#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src[]="123456789012";
	char dest[]="ABCDEF";
	int size=18;
	char buff[18];
	int result=-999999;
	

	strcpy(buff,dest);
	result =strlcat(buff, src, size);
	printf ("1---r: %d, dest: %s\n", result, buff);

	strcpy(buff, dest);
	result = ft_strlcat(buff, src, size);
	printf ("2---r: %d, dest: %s\n", result, buff);

}
