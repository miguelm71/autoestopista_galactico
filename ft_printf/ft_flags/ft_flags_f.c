/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:57:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/05 14:57:47 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// @brief initialize a t_flags structure
t_flags	*ft_init_flags(void)
{
	t_flags	*flags;

	flags = (t_flags *)malloc (sizeof(t_flags));
	flags->data_type = 0;
	flags->dot = -1;
	flags->minus = -1;
	flags->plus = -1;
	flags->pad = -1;
	flags->space = -1;
	flags->width = -1;
	flags->zero = -1;
	return (flags);
}

// @brief set width or number of decimals in t_flags structure
// depending on previous presence of dot
static int	ft_put_flag_number(int n, t_flags *flags)
{
	if (flags->dot == -1)
	{
		if (flags->width == -1)
			flags->width = n;
		else
			return (-1);
	}
	else
	{
		if (flags->decimals == -1)
			flags->decimals = n;
		else
			return (-1);
	}
	return (0);
}

// @brief justify adding spaces at the righ |4   |
static int	ft_set_minus_flag(t_flags *flags)
{
	if (flags->minus == -1)
	{
		flags->minus = 1;
		if (flags->zero != -1)
			flags->zero = -1;
		return (0);
	}
	return (-1);
}

static int	ft_set_type_flag(char t, t_flags *flags)
{
	if (ft_is_flag(t))
	{
		flags->data_type = t;
		return (0);
	}
	return (-1);
}
/* static int	ft_set_zero(t_flags *flags)
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

static int	ft_set_dot(t_flags *flags)
{
	if (flags->dot == -1){
		flags->dot = 1;
		return (0);
	}
	return (-1);
}

static int	ft_set_plus(t_flags *flags)
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

static int ft_set_space (t_flags *flags)
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

static int ft_set_pad(t_flags *flags)
{
	if (flags->pad == -1)
	{
		flags->pad = 1;
		return (0);
	}
	return (-1);
} 
*/
