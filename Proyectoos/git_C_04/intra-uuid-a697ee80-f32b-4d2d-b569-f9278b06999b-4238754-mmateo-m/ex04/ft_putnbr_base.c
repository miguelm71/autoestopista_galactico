/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:21:04 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/18 12:41:35 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_has_rept(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0' && (i <= (len - 1)))
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_has_signs(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_write_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	mi_nbr;

	mi_nbr = nbr;
	len = ft_get_len(base);
	if (len < 2 || ft_has_rept(base, len) || ft_has_signs(base))
		return ;
	if (mi_nbr < 0)
	{
		mi_nbr = mi_nbr * -1;
		ft_write_char ('-');
	}
	if (mi_nbr < len)
		ft_write_char(base[mi_nbr]);
	else
	{
		ft_putnbr_base(mi_nbr / len, base);
		ft_putnbr_base(mi_nbr % len, base);
	}
}
