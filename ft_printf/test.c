#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>

int	mi_print(char *ss, ...)
{
	char	*str;
	va_list	ptr;

	va_start(ptr, ss);
	str = ss;
	while (*str)
	{
		if (isalpha(*str))
		{
			if (*str == '%')
			{
				printf("%% detected\n");
				str++;
				if (*str == 'i')
					printf("i detected: %d\n", va_arg(ptr, int));
				else if (*str == 'a')
					printf ("a detected: %s\n", va_arg(ptr, char*));
				else
					write(1, str, 1);
			}
			else
				write(1, str, 1);
			
		}
		str++;
	}
	va_end(ptr);
	write(1, "\0", 1);
	return (0);
}



int	main(int argn, char **argv)
{
	char	ss[] = "hola ca%iracola.";

	mi_print(ss, 34, "aaa");
}

