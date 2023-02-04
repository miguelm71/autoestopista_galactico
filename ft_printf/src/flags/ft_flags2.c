/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:30:12 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/04 14:46:25 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

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
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}
