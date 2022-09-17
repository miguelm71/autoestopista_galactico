/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:48:38 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/22 14:19:20 by mmateo-m         ###   ########.fr       */
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
			if (base[i] == '-' || base[i] == '+' || base[i] == base[j] || \
			base[j] == '+' || base[j] == '-' || base[j] == '\t' || \
			base[j] == '\n' || base[j] == '\v' || base[j] == '\f' || \
			base[j] == '\r' || base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}	
	return (1);
}

int	ft_get_b_index(char *base, char c)
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

int	ft_get_sign(char *s, int *j)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\v' || s[i] == '\f' || \
			s[i] == '\r' || s[i] == ' ')
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}
	*j = i;
	return (sign);
}

int	*ft_atoi_base(char *s, char *base, int base_len)
{
	int	*number;
	int	b_i;
	int	j;
	int	sign;

	number = malloc (sizeof(int));
	*number = 0;
	sign = ft_get_sign(s, &j);
	while (s[j] != '\0')
	{
		b_i = ft_get_b_index(base, s[j]);
		if ((b_i) != -1)
			*number = (*number * base_len) + b_i;
		else
			break ;
		j++;
	}
	*number = *number * sign;
	return (number);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*m_nbr;
	int		*nbr_i;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nbr_i = ft_atoi_base(nbr, base_from, ft_get_len(base_from));
	if (nbr_i == NULL)
		return (NULL);
	m_nbr = ft_get_mem(*nbr_i, base_to);
	ft_putnbr_base(*nbr_i, base_to, m_nbr);
	return (m_nbr);
}
