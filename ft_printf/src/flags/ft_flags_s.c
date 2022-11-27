/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:55:47 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/10 19:13:02 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**/
//justify adding "0" at the left |0004|
static int	ft_set_zero_flag(t_flags *flags)
{
	if (flags->zero == -1)
	{
		flags->zero = 1;
		if (flags->minus != -1)
			flags->minus = -1;
		return (0);
	}
	return (-1);
}

/**/
// @brief set decimal dot |  0.4|
static int	ft_set_dot_flag(t_flags *flags)
{
	if (flags->dot == -1)
	{
		flags->dot = 1;
		return (0);
	}
	return (-1);
}

/**/
// @brief force to add sign in numbers |+3 or -3|
static int	ft_set_plus_flag(t_flags *flags)
{
	if (flags->plus == -1)
	{
		flags->plus = 1;
		if (flags->space != -1)
			flags->space = -1;
		return (0);
	}
	return (-1);
}

/**/
// @brief for to add negative sign or an space for positive
static int	ft_set_space_flag(t_flags *flags)
{
	if (flags->space == -1)
	{
		flags->space = 1;
		if (flags->plus != -1)
			flags->plus = -1;
		return (0);
	}
	return (-1);
}

/**/
// @brief force to include base indicator 0x or 0X
static int	ft_set_pad_flag(t_flags *flags)
{
	if (flags->pad == -1)
	{
		flags->pad = 1;
		return (0);
	}
	return (-1);
}
