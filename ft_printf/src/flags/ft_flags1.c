/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:57:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/05 07:22:02 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_flags.h"

/***/
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

void	ft_end_flags(t_flags *flags)
{
	free (flags);
}

/**/
// @brief set width or number of decimals in t_flags structure
// depending on previous presence of dot
int	ft_set_flag_number(int n, t_flags *flags)
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

/**/
// @brief justify adding spaces at the righ |4   |
int	ft_set_minus_flag(t_flags *flags)
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

/**/
int	ft_set_type_flag(char t, t_flags *flags)
{
	if (flags->data_type == 0)
	{
		flags->data_type = t;
		return (0);
	}
	return (-1);
}

/**/
int	ft_is_flag(char c)
{
	if (c == '+' || c == '-' || c == ' ' || c == '.' || c == '#'
		|| ft_isdigit(c))
		return (1);
	else
		return (0);
}

/**/
int	ft_is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X')
		return (1);
	else
		return (0);
}

/* int	ft_set_zero(t_flags *flags)
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

int	ft_set_dot(t_flags *flags)
{
	if (flags->dot == -1){
		flags->dot = 1;
		return (0);
	}
	return (-1);
}

int	ft_set_plus(t_flags *flags)
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

int ft_set_space (t_flags *flags)
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

int ft_set_pad(t_flags *flags)
{
	if (flags->pad == -1)
	{
		flags->pad = 1;
		return (0);
	}
	return (-1);
} 
*/
