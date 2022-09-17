/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:56:56 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/11 20:50:54 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	joker;
	int	indexl;
	int	indexh;

	indexl = 0;
	indexh = size - 1;
	while (indexl < indexh)
	{
		joker = tab[indexl];
		tab[indexl] = tab[indexh];
		tab[indexh] = joker;
		indexl++;
		indexh--;
	}
}
