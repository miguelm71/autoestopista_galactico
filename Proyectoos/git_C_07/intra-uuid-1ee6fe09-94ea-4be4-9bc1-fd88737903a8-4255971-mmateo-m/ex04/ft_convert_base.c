/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:48:38 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/26 12:10:39 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_res_len(int nbr, char *base);
char	*ft_get_mem(int nbr_i, char *base);
void	ft_putnbr_base(int nbr, char *base, char *res);
int		ft_get_len(char *base);

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_get_len(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-' || \
			base[j] == '\t' || base[j] == '\n' || base[j] == '\v' || \
			base[j] == '\f' || base[j] == '\r' || base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}	
	return (1);
}

int	ft_get_base_index(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}

int	ft_get_sign(char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base, int base_len)
{
	int	str_len;
	int	number;
	int	weight;
	int	sign;

	sign = ft_get_sign(str);
	str_len = ft_get_len(str);
	number = 0;
	weight = 1;
	while (str_len -1 >= 0 && str[str_len - 1] != '-' && \
			str[str_len - 1] != '+')
	{
		number = number + (ft_get_base_index(base, str[str_len - 1]) * weight);
		weight = weight * base_len;
		str_len--;
	}
	number = number * sign;
	return (number);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*m_nbr;
	int		nbr_i;
	int		res_len;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nbr_i = ft_atoi_base(nbr, base_from, ft_get_len(base_from));
	m_nbr = ft_get_mem(nbr_i, base_to);
	ft_putnbr_base(nbr_i, base_to, m_nbr);
	return (m_nbr);
}
