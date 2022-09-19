/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:27:44 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/19 10:59:09 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		write (1, ptr, 1);
		ptr++;
	}
	write(1, "\n", 1);
}

void ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}

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

void ft_sort_params (char **tab, int size)
{
	int		index;
	int		index2;
	char	*joker;
	int		is_change;
	
	is_change = 1;
	while (is_change != 0)
	{
		is_change = 0;
		index = 1;
		index2 = index + 1;
		while (index < size - 1)
		{
			if (ft_strcmp (tab[index], tab[index2]) > 0)
			{
				joker = tab[index];
				tab[index] = tab[index2];
				tab[index2] = joker;
				is_change = 1;
			}
			index++;
			index2 = index +1;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		ft_sort_params(argv, argc);
		ft_print_params(argc, argv);
	}
}
