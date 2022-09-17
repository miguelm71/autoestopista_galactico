/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:42:45 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/14 17:54:12 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
