#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int neg;
	int r;

	if (!str)
		return (0);
	i = 0;
	while(str[i] == 't' || str[i] == 'n' || str[i] == 'v' || 
			str[i] == 'f' || str[i] == 'r' || str[i] == ' ')
		i++;
	neg = 1;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * neg);
}