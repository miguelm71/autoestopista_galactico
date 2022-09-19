/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:21:21 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/23 11:47:25 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	ft_get_len(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
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

int	ft_read_file(char *file_name, number_d *list, int *file)
{
	char		*str;
	char		c;
	number_d	*node;
	int			i;

	i = 0;
	str = (char *)malloc (sizeof(char));
	*file = open(file_name, O_RDWR);
	while ((read(*file, &c, 1)) != 0)
	{
		if (c != '\n')
			str = ft_add_char(str, c);
		else
		{
			node = ft_dict_create_entry (str);
			if (node == NULL)
				return (-1);
			str[0] = '\0';
			free (str);
			str = (char *)malloc(sizeof(char));
			ft_add_node (&list, node, i++);
		}
	}
	close (*file);
	return (0);
}
