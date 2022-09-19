/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_creat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:54:19 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/24 17:54:22 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdio.h>

char	*ft_get_name(char *str, int *index)
{
	int		j;
	int		m;
	char	*name;
	char	c;

	m = *index;
	while (str[m] != ':')
	{
		c = str[m];
		m++;
	}
	if (m <= 0)
		return (NULL);
	name = (char *)malloc (sizeof(char) * (m + 1));
	j = 0;
	while (j < m)
	{
		name[j] = str[j];
		j++;
	}
	m++;
	name[j] = '\0';
	*index = m;
	return (name);
}

char	*ft_parse_value(char *str, int index)
{
	int		m;
	int		j;
	char	*value;

	while (str[index] == ' ')
			index++;
	m = index;
	while (str[index] != '\0')
		index++;
	while (str[index - 1] == ' ')
		index--;
	value = malloc(sizeof(char) * (index - m));
	j = 0;
	while ((j + m) <= index)
	{
		value[j] = str[m + j];
		j++;
	}
	value[j + 1] = '\0';
	return (value);
}

number_d	*ft_get_new_number(char *name, char *value)
{
	number_d	*num;

	num = (number_d *)malloc (sizeof(number_d));
	num->n = name;
	num->v = value;
	return (num);
}

number_d	*ft_dict_create_entry(char *str)
{
	int			i;
	char		*name;
	char		*value;
	number_d	*dict;

	i = 0;
	if (ft_get_len(str) == 0)
		return (NULL);
	name = ft_get_name(str, &i);
	if (name == NULL)
		return (NULL);
	value = ft_parse_value(str, i);
	if (value == NULL)
		return (NULL);
	dict = ft_get_new_number(name, value);
	return (dict);
}	
