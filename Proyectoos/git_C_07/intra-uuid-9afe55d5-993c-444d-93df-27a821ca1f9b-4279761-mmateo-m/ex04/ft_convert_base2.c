/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:47:53 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/22 17:06:39 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_get_res_len(int nbr, char *base)
{
	int	i;
	int	base_len;

	base_len = ft_get_len(base);
	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / base_len;
		i++;
	}
	return (i);
}

char	*ft_get_mem(int nbr_i, char *base)
{
	char	*r;
	int		len;
	int		i;

	len = ft_get_res_len(nbr_i, base) + 2;
	r = malloc(sizeof(char) * len);
	i = -1;
	while (++i < len)
		r[i] = '\0';
	return (r);
}

void	ft_store_char(char c, char *res)
{
	int	i;

	i = 0;
	while (res[i] != '\0')
		i++;
	res[i] = c;
}

void	ft_putnbr_base(int nbr, char *base, char *res)
{
	int			len;
	long int	mi_nbr;

	mi_nbr = nbr;
	len = ft_get_len(base);
	if (mi_nbr < 0)
	{
		mi_nbr = mi_nbr * -1;
		ft_store_char ('-', res);
	}
	if (mi_nbr < len)
	{
		ft_store_char(base[mi_nbr], res);
	}
	else
	{
		ft_putnbr_base(mi_nbr / len, base, res);
		ft_putnbr_base(mi_nbr % len, base, res);
	}
}
