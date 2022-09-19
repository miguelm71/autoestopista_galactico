/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:57:29 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/10 21:59:36 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_array(int *combination, int order)
{
	int		index;
	char	character;

	index = 0;
	while (index < order)
	{
		character = combination[index] + '0';
		write(1, &character, 1);
		index++;
	}
	index = 0;
	while (index < order)
	{
		if (combination[index] != (10 - order + index))
		{
			write(1, ", ", 2);
			return ;
		}
		index++;
	}
}

void	ft_calculate(int order, int index, int value, int *combination)
{
	while (value <= 9)
	{
		combination[index] = value;
		if (index < order - 1)
		{
			ft_calculate (order, index + 1, value + 1, combination);
		}
		else
		{
			ft_putchar_array(combination, order);
		}
		value++;
	}
}

void	ft_print_combn(int n)
{
	int	combination[10];

	if ((n > 0) && (n <= 10))
		ft_calculate(n, 0, 0, combination);
}
