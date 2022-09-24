/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:36:24 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/24 15:40:48 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_get_digit(int *nbr)
{
	long int	lnb;
	int			digit;

	lnb = *nbr;
	if (lnb < 0)
		lnb = lnb * -1;
	if (lnb > 9)
	{
		digit = lnb % 10;
		lnb = lnb / 10;
	}
	else
	{
		digit = lnb;
		lnb = 0;
	}
	*nbr = (int)lnb;
	return (digit + '0');
}

static char	*ft_rev(char *str)
{
	int		l;
	int		i;
	char	s;

	i = 0;
	l = ft_strlen(str) - 1;
	while (i < l)
	{
		s = str[i];
		str[i] = str[l];
		str[l] = s;
		i++;
		l--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		i;

	neg = (n < 0);
	str = ft_calloc (sizeof(char), (11 + neg));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i] = ft_get_digit(&n);
		i++;
	}
	if (neg)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_rev(str));
}
