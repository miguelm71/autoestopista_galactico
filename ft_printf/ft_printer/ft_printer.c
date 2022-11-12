/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:12:45 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/12 14:54:21 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

int	ft_print_param(t_flags flags, va_list param_ptr)
{
	t_list	*attribute;
	int		r;

	attribute = ft_lstnew(NULL);
	if (flags.data_type == 'c')
		r = ft_print_char(attribute, param_ptr);
	else if (flags.data_type == 's')
		r = ft_print_string(attribute, param_ptr);
	else if (flags.data_type == 'p')
		r = ft_print_pointer(attribute, param_ptr);
	else if (flags.data_type == 'd')
		r = ft_print_decimal(attribute, param_ptr);
	else if (flags.data_type == 'i')
		r = ft_print_integer(attribute, param_ptr);
	else if (flags.data_type == 'u')
		r = ft_print_unsigned_decimal(attribute, param_ptr);
	else if (flags.data_type == 'x')
		r = ft_print_lower_hex(attribute, param_ptr);
	else (flags.data_type == 'X')
		r = ft_print_touper_hex(attribute, param_ptr);
	return (r);
}

static int	ft_print_char(t_list *attribute, va_list param_ptr)
{
	char	c;
	t_list	*node;

	c = va_arg(param_ptr, char);
	node = ft_lstnew(&c);
	if (node != NULL)
		return (-1);
	ft_lstadd_front(&attribute, node);
	return (ft_print_list(attribute));
}

static int ft_print_list(t_list *list)
{
	int n;
	int	c;

	c = 0;
	n = ft_lstsize (&list);
	while (c < n)
	{
		ft_putchar_fd(ft_lst)
	}

}