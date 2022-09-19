/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:39:35 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/27 13:02:20 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_getlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *o, char *d)
{
	int	i;

	i = 0;
	while (o[i] != '\0')
	{
		d[i] = o[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_a;
	int			i;

	s_a = malloc (sizeof(t_stock_str) * (ac + 1));
	if (s_a == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s_a[i].size = ft_getlen(av[i]);
		s_a[i].str = av[i];
		s_a[i].copy = malloc(sizeof (char) * (ft_getlen(av[i]) + 1));
		if (s_a[i].copy == NULL)
			return (NULL);
		ft_strcpy (av[i], s_a[i].copy);
		i++;
	}
	s_a[ac].str = 0;
	return (s_a);
}
