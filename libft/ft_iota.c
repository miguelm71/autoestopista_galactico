#include "libft.h"

char *ft_itoa(int n)
{
	char *str;
	int neg;
	int i;
	
	neg = (n < 0);
	str = ft_calloc (sizeof(char), (11 + neg));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		
	}

	
}