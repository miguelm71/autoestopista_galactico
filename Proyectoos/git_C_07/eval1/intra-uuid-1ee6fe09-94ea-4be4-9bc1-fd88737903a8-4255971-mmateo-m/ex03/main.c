#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main (int agrc, char **agrv)
{
	char	**mi_arr;
	int		i = 0;
	char 	*result;
	if (agrc > 0)
	{
		mi_arr = malloc (sizeof(char *) * (agrc - 1));
		while (i + 1 < agrc)
		{
			mi_arr[i] = agrv[i + 1];
			i++;
		}

		result = ft_strjoin(i, mi_arr, "");
		printf ("result: %s\n", result);
	}
	else
		printf ("Error!!!");
}
