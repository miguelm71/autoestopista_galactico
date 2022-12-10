/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:22:21 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/10 12:06:26 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_get_flags(char **str, va_list param_ptr)
{
	int		error;
	t_flags	*flags;

	error = 0;
	flags = ft_init_flags();
	while ((ft_is_type(**str) || ft_is_flag(**str)) && !error)
	{
		if (ft_is_flag(**str))
			error = ft_parse_flags(*str, flags);
		else if (ft_is_type(**str))
		{
			error = ft_set_type_flag(**str, flags);
			if (!error)
			{
				ft_end_flags(flags);
				return (ft_print_param(flags, param_ptr));
			}
		}
		else
			error = 1;
		str++;
	}
	ft_end_flags(flags);
	return (-1);
}

int	ft_process_param(char **str, va_list param_ptr)
{
	int		i;

	i = 0;
	if (ft_strncmp(*str, "%", 1) == 0)
		ft_putchar_fd('%', 1);
	else
	{
		i = ft_get_flags(str, param_ptr);
		return (i);
	}
	return (0);
}

int	ft_printf(char const *p, ...)
{
	va_list	param_ptr;
	char	*str;
	int		n;

	n = 0;
	str = (char *)p;
	va_start(param_ptr, p);
	while (*str && ft_isprint(*str))
	{
		if (ft_strncmp(str, "%", 1) == 0)
		{
			str++;
			n = n + ft_process_param(&str, param_ptr);
		}
		else
			ft_putchar_fd(*str, 1);
		str++;
		n++;
	}
	return (n);
}
