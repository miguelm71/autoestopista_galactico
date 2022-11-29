#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "libft.h"

int	ft_numparams(char *str)
{
	int	i;
	int	params_count;

	i = 0;
	params_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == '%')
		{
			params_count++;
			i++;
		}
		i++;
	}
	return (params_count);
}

void ft_printf(char const *ss, ...)
{
	char	*str;
	va_list	ptr;
	va_list	ptr2;
	char	*param_string;
	int		param_integer;

	//inicializa el puntero a la lista de parametros.
	va_start(ptr, ss);
	va_copy(ptr2, ptr);
	str = ss;
	while (*str)
	{
		if (isprint(*str))
		{
			if (*str == '%')
			{
				printf("\n%% detected\n");
				str++;
				if (*str == 'i')
				{
					 //coge el primer parametro
					param_integer = va_arg(ptr, int);
					printf("i detected: %d\n", param_integer);
				}
				else if (*str == 'a')
				{
					//coge el segundo parametro
					param_string = va_arg(ptr, char *);
					printf ("a detected: %s\n", param_string);
				}
				else
					write(1, str, 1);
			}
			else
				write(1, str, 1);
		}
		str++;
	}
	char *i = va_arg(ptr, char *);
	printf ("\n\nha recuperado: %s", i);
	//finaliza el puntero a la lista de parametros
	va_end(ptr);
	write(1, "\n", 1);
}

int	main(int argn, char **argv)
{
	char	ss[] = "hola ca%ira%acola.";

	ft_printf(ss, 34, "aaa");
}
