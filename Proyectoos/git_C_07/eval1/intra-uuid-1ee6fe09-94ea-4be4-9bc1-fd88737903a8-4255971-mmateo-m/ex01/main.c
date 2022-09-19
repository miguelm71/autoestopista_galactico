#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main (int argc, char **argv)
{
	int min;
	int max;
	int *ptr;
	int len;
	int i; 
	min = 1;
	max = 5;
	if (argc >= 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
	}
	ptr = ft_range (min, max);
	if (ptr == NULL)
		exit (-1);	
	len = max - min + 1;
	i = 0;
	while (i < len)
	{
		printf ("ptr[%d]: %d\n",i,ptr[i]);
		i++;
	}
}
