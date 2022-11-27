/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_t.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:53:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/12 14:17:05 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
/**/
static int	ft_is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X')
		return (1);
	else
		return (0);
}
/**/
static int	ft_parse_flags(char *str, t_flags *flags)
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
/**/
static int	ft_is_flag(char c)
{
	if (c == '+' || c == '-' || c == ' ' || c == '.' || c == '#'
		|| ft_isdigit(c))
		return (1);
	else
		return (0);
}
