#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main (int agrc, char **agrv)
{
	char *c = "hola pepe";
	char *ptr1;
	char *ptr2;
	int comp;

	if (agrc > 1)
		c = agrv[1];
	ptr1 = strdup(c);
	ptr2 = ft_strdup(c);
	comp = strcmp (ptr1, ptr2);
	printf("result1: %s, diff: %d\n", ptr1, strcmp(c, ptr1));
	printf("result2: %s, diff: %d\n", ptr2, strcmp(c, ptr2));
	printf("comp 1 y 2: %d\n", strcmp(ptr1, ptr2));

	
}
