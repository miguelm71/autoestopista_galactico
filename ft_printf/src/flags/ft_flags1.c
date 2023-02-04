/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:57:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/04 14:42:29 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	ft_get_flags(char **str, va_list *param_ptr)
{
	int		result;
	t_flags	*flags;

	result = 0;
	flags = ft_init_flags();
	while ((ft_is_type(**str) || ft_is_flag(**str)) && !result)
	{
		if (ft_is_flag(**str))
			result = ft_parse_flags(str, flags);
		else if (ft_is_type(**str))
		{
			result = ft_set_type_flag(**str, flags);
			if (!result)
			{
				result = ft_print_param(flags, param_ptr);
				ft_end_flags(flags);
				return (result);
			}
		}
		else
			result = 1;
		(*str)++;
	}
	ft_end_flags(flags);
	return (-1);
}

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
	flags->decimals = 0;
	return (flags);
}

void	ft_end_flags(t_flags *flags)
{
	free (flags);
}

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
		if (flags->decimals == 0)
			flags->decimals = n;
		else
			return (-1);
	}
	return (0);
}

int	ft_set_minus_flag(t_flags *flags)
{
	if (flags->minus == -1)
	{
		flags->minus = 1;
		if (flags->zero != -1)
			flags->zero = -1;
		return (0);
	}
	return (0);
}
