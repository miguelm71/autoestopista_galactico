/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:22:21 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/10 15:00:39 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
equipo
static int	ft_get_flags(char *str, t_flags *sf)
{
	int		error;
	t_flags	*flags;

	error = 0;
	flags = ft_init_flags();
	while ((ft_is_type(*str) || ft_is_flag(*str)) && !error)
	{
		if (ft_is_flag(*str))
		{
			error = ft_parse_flags(str, flags);
		}
		else if (ft_is_type(*str))
		{
			error = ft_set_type_flag(*str, flags);
			if (!error)
			{
				ft_print_param();
				return (0);
			}
		}
		str++;
	}
	return (-1);
}

static int	ft_process_param(char *str_cpy, va_list *param_ptr)
{
	t_flags	flags;

	if (ft_check_data_type_flag(str_cpy, &flags) == -1)
	{
		if (*str_cpy == "%")
			ft_putchar_fd('%', 1);
	}
	else
	{
		ft_get_flags(*str_cpy, &param_ptr);

	}
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		nc;
	va_list	param_ptr;
	char	*str_cpy;

	str_cpy = ft_strdup(str);
	va_start(param_ptr, str_cpy);
	while (*str_cpy && ft_isprint(*str_cpy))
	{
		if (*str_cpy == "%")
			ft_process_param(str_cpy, param_ptr);
		else
			ft_putchar_fd(*str_cpy, 1);
		str_cpy++;
	}
	nc = 0;
}