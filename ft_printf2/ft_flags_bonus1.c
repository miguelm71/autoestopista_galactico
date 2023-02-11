/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_bonus1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:37:18 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/11 16:04:35 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* int	ft_parse_flags(char **str, t_flags *flags)
{
	int	n;
	int	m;

	n = 0;
	if (**str == '+')
		n = ft_set_plus_flag(flags);
	else if (**str == '-')
		n = ft_set_minus_flag(flags);
	else if (**str == ' ')
		n = ft_set_space_flag(flags);
	else if (**str == '.')
		n = ft_set_dot_flag(flags);
	else if (**str == '#')
		n = ft_set_pad_flag(flags);
	else if (**str == '0' && flags->zero == -1)
		n = ft_set_zero_flag(flags);
	else
	{
		m = ft_get_num(str);
		n = ft_set_flag_number(m, flags);
	} 
	return ();
}

int	ft_get_num(char **str)
{
	int	m;

	m = 0;
	while (ft_isdigit(**str))
	{
		m = (m * 10) + (**str - 48);
		if (ft_isdigit(*(*str + 1)))
			(*str)++;
		else
			return (m);
	}
	if (m > 0)
		(*str)--;
	return (m);
} */