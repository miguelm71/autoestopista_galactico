#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

void my_function(int ***b)
{
	***b = 4;
	printf ("***b: %d\n", ***b);
	printf ("**b: %p\n", **b);
	printf ("*b: %p\n", *b);
	printf ("b: %p\n", b);
}

int main()
{
	int a;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	a = 77;
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;


	printf ("a before: %d\n",a);
	ft_ultimate_ft(ptr9);
	printf ("a after: %d\n", a);
}

