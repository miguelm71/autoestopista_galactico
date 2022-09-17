#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
	char *str = argv[1];
	char *sep = argv[2];

	(void)argc;
	char **array = ft_split(str, sep);

	int i = 0;
	while (array[i] != 0)
	{
		printf ("array[%d]: %s\n", i, array[i]);
		i++;
	}

}