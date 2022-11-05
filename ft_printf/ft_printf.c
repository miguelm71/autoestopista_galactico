/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:22:21 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/05 15:04:15 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_data_type_flag(char c, t_flags *flags)
{
	char	r;

	r = 1;
	if (c == 'c')
		ft_set_sf->data_type = 'c';
	else if (c == 's')
		sf->data_type = 's';
	else if (c == 'p')
		sf->data_type = 'p';
	else if (c == 'd')
		sf->data_type = 'd';
	else if (c == 'i')
		sf->data_type = 'i';
	else if (c == 'u')
		sf->data_type = 'u';
	else if (c == 'x')
		sf->data_type = 'x';
	else if (c == 'X')
		sf->data_type = 'X';
	else
		r = 0;
	return (r);
}



static int	ft_get_flags(char *str, t_flags *sf)
{
	int		error;
	t_flags	*flags;

	error = 0;
	flags = ft_init_flags();
	while ((ft_is_type(*str) || ft_is_flag(str)) && !error)
	{
		if (ft_is_flag(*str))
		{
			error = ft_parse_flags(str, flags);
		}
		else if (ft_is_type(*str))
		{
			error = ft_set_type_flag(*str, flags);
			ft_print_param();
			return (0);
		}
		return (-1);
	}
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