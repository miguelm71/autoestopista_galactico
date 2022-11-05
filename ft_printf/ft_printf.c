/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:22:21 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/02 19:29:52 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

static int	ft_check_data_type_flag(char c, t_flags sf)
{
	char	r;

	if (c == 'c')
		r = 'c';
	else if (c == 's')
		r = 's';
	else if (c == 'x')
		r = 'x';
	else if (c == 'X')
		r = 'X';
	else if (c == 'p')
		r = 'p';
	else if (c == 'd')
		r = 'd';
	else if (c == 'i')
		r = 'i';
	else if (c == 'u')
		r = 'u';
	else
		r = 0;
	return (r);
}

static int	ft_print_param(char *str_cpy, va_list param_ptr)
{

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
			ft_print_param(str_cpy, param_ptr);
		else
			ft_putchar_fd(*str_cpy,1);
		str_cpy++;
	}
	nc = 0;
}