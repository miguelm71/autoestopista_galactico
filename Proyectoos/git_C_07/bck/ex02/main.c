#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main (int argc, char **argv)
{
	int min;
	int max;
	int *ptr2;
	int len;
	int i; 
	min = 1;
	max = 5;

	if (argc >= 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
	}
	len = ft_ultimate_range(&ptr2, min, max);
	if (ptr2 == NULL){
		printf ("ha devuelto null, len: %d\n", len);
			exit (-1);	
	}
	i = 0;
	printf ("len: %d\n",len);
	while (i < len)
	{
		printf ("ptr2[%d]: %d\n",i,ptr2[i]);
		i++;
	}
}
