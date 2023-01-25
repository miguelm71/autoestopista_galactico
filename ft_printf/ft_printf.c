/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:22:21 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/25 18:28:39 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_flags(char **str, va_list *param_ptr)
{
	int		error;
	int		result;
	t_flags	*flags;

	error = 0;
	flags = ft_init_flags();
	while ((ft_is_type(**str) || ft_is_flag(**str)) && !error)
	{
		if (ft_is_flag(**str))
			error = ft_parse_flags(str, flags);
		else if (ft_is_type(**str))
		{
			error = ft_set_type_flag(**str, flags);
			if (!error)
			{
				result = ft_print_param(flags, param_ptr);
				if (result == -1)
					return (result);
				ft_end_flags(flags);
				return (result);
			}
		}
		else
			error = 1;
		(*str)++;
	}
	ft_end_flags(flags);
	return (-1);
}

int	ft_printf(char const *p, ...)
{
	va_list	param_ptr;
	char	*str;
	int		n;
	int		m;
	
	n = 0;
	str = (char *)p;
	va_start(param_ptr, p);
	while (*str && ft_isprint(*str))
	{
		if (ft_strncmp(str, "%", 1) == 0)
		{
			str++;
			m = ft_get_flags(&str, &param_ptr);
			if (m == -1)
				return n;
			n = n + m;
		}
		else
		{	
 			ft_putchar_fd(*str, 1);
			n++;
		}
		str++;
	}
	return (n);
}
