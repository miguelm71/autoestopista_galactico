#include "bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_get_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	number;
	int	i;

	i = 0;
	number = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (number);
}

char	*ft_add_char(char *str, char c)
{
	int		size;
	char	*n_str;
	int		i;

	size = ft_get_len (str);
	if (size == 0)
	{
		n_str = malloc (sizeof(char) * 2);
		n_str[0] = c;
		n_str[1] = '\0';
	}
	else
	{
		n_str = malloc (sizeof(char) * (size + 2));
		i = 0;
		while (i < size)
		{
			n_str[i] = str[i];
			i++;
		}
		n_str[i] = c;
		n_str[i + 1] = '\0';
	}
	free (str);
	return (n_str);
}

int ft_read_line(char *line, int file)
{
	char c;
	int i;

	i = 0;
	c = '0';
	line = malloc(sizeof(char));
	while (c != '\n')
	{
		read(file, &c, 1);
		line = ft_add_char(line, c);
		i++;
	}
	return i;
}

f_data  *read_first_line(int file)
{
	char *line;
	f_data *f_d;
	int i;

	line = NULL;
	ft_read_line(line, file);
	i = -1;
	while (line[i + 1] != '\0')
		i++;
	f_d = malloc (sizeof(f_data));
	f_d->fill_c = line[i];
	f_d->barrier_c = line[--i];
	f_d->empty_c = line[--i];
	line[i] = '\0'; 
	f_d->lines = ft_atoi(line);
	free(line);
	f_d->columns = ft_read_line(line, file);
	free(line);
	close(file);
	return (f_d);
}

char **read_file(char *file_name, f_data *f_d)
{
	int file;
	char **matriz;
	int i;
	char *line;

	line = NULL;
	i = 0;
	file = open(file_name, O_RDWR);
	f_d = read_first_line(file);
	matriz = (char **)malloc(sizeof(char *) * f_d->lines);
	while (++i < f_d->lines)
		matriz[i] = malloc((sizeof(char)) * (f_d->columns + 1));
	i = 0;
	while(i < f_d->lines)
	{
		ft_read_line(line, file);
		matriz[i] = line;
	}
	return matriz;
}



void print_matrix(char **matrix, f_data *f_d)
{
	int i;
	int j;
	char *line;
	char c;
printf("1")
	i = 0;
	while (i < f_d->lines)
	{
		j = 0;
		line = matrix[i];
		while (line[j] != '\0')
		{
			c = line[j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main ()
{
	char *file = "./test.txt";
	char **matrix;
	f_data *f_d;

	f_d = NULL;
	matrix = read_file(file, f_d);
	print_matrix(matrix, f_d);
}