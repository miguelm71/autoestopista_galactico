/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags2_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:53:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/04 19:53:08 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_flags.h"

/**/
int	ft_parse_flags_(char *str, t_flags *flags)
{
	int	n;

	n = 0;
	if (*str == '+')
		n = ft_set_plus_flag(flags);
	else if (*str == '-')
		n = ft_set_minus_flag(flags);
	else if (*str == ' ')
		n = ft_set_space_flag(flags);
	else if (*str == '.')
		n = ft_set_dot_flag(flags);
	else if (*str == '#')
		n = ft_set_pad_flag(flags);
	else if (*str == '0')
		n = ft_set_zero_flag(flags);
	else
		n = ft_set_flag_number(ft_atoi(str), flags);
	return (n);
}


