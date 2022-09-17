/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:33:02 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/27 15:00:28 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &(str[i]), 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_putint(int i)
{
	char	character;

	character = i + '0';
	write(1, &character, 1);
}

void	ft_extract_digit(int nb)
{
	int			digit;
	long int	lnb;

	lnb = nb;
	if (lnb < 0)
		lnb = lnb * -1;
	if (lnb > 9)
	{
		digit = lnb % 10;
		lnb = lnb / 10;
		ft_extract_digit(lnb);
	}
	else
	{
		digit = lnb;
	}
	ft_putint(digit);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putint(0);
		return ;
	}
	else if (nb < 0)
		write(1, "-", 1);
	ft_extract_digit(nb);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_printstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_printstr(par[i].copy);
		i++;
	}
}
