/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:34:01 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/16 14:27:55 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
 *char *ft_strstr(char *str, char *to_find)
{
	char	*tf;
	char	*st;
	char	*st2;
	int		r;

	st = str;
	while (*st != '\0')
	{
		tf = to_find;
		if (*st == *tf)
		{
			st2 = st;
			r = 0;
			while (*tf != '\0')
			{
				if (*tf != *st2)
					r = 1;
				st2++;
				tf++;
			}
			if (r == 0)
				return (st);
		}
		st++;
	}
	return (NULL);
}
 * */
