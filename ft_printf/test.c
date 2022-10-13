#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>

int	mi_print(char *ss, ...)
{
	char	*str;
	va_list	ptr;
	char *param_string;
	int param_integer;

	va_start(ptr, ss); //inicializa el puntero a la lista de parametros.
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
	//finaliza el puntero a la lista de parametros
	va_end(ptr);
	write(1, "\n", 1);
	return (0);
}

int	main(int argn, char **argv)
{
	char	ss[] = "hola ca%ira%acola.";

	mi_print(ss, 34, "aaa");
}
