/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:19:11 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/18 12:35:06 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_avoid_spaces(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v')
		{
			i++;
			continue ;
		}
		if (str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		{
			i++;
			continue ;
		}
		break ;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	number;
	int	sign;
	int	i;

	i = 0;
	number = 0;
	sign = 1;
	i = ft_avoid_spaces (str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	number = number * sign;
	return (number);
}
