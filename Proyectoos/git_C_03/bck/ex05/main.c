#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src[]="zyxwvuts";
	char kk[]="2222222222222222222222222222";
	char dest[]="ABCDEF";
	char pp[]="11111111111111111111111111111";
	int size= 9;
	char buff[size];
	int result;
	

	strcpy(buff,dest);
	result =strlcat(buff, src, size);
	printf ("1---r: %d, dest: %s\n", result, buff);

	strcpy(buff, dest);
	result = ft_strlcat(buff, src, size);
	printf ("2---r: %d, dest: %s\n", result, buff);

	if (pp[0] == kk[0])
		return (1);
}
