/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:29:00 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/11 21:26:56 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;
	int	joker;

	joker = 1;
	while (joker != 0)
	{
		index = 0;
		index2 = index + 1;
		joker = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index2])
			{
				joker = tab[index];
				tab[index] = tab[index2];
				tab[index2] = joker;
			}
			index++;
			index2 = index +1;
		}
	}
}
