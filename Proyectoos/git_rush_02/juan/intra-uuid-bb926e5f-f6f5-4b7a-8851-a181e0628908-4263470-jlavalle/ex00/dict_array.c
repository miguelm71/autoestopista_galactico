/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:54:05 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/24 17:54:07 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	r;

	r = 0;
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	ft_get_file_lines(char *file_name)
{
	int		fd;
	int		num;
	char	c;

	num = 0;
	fd = open(file_name, O_RDWR);
	while (read(fd, &c, 1) != 0)
	{
		if (c == '\n')
			num++;
	}
	close(fd);
	return (num);
}

number_d	*ft_create_table(int num)
{
	number_d	*p;

	p = (number_d *)malloc(sizeof(number_d) * num);
	return (p);
}

void	ft_add_node(number_d **list, number_d *node, int index)
{
	number_d	*lista;

	lista = *list;
	lista[index].n = (*node).n;
	lista[index].v = (*node).v;
}

char	*ft_get_value(number_d *lista, int size, char *name)
{
	int			i;
	number_d	*p;

	p = lista;
	i = 0;
	while (i < size)
	{
		if (ft_strcmp((lista[i]).n, name) == 0)
			return ((p[i]).v);
		i++;
	}
	return (NULL);
}
