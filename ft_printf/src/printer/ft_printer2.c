/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:24:58 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/13 19:08:24 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

int	ft_print_decimal(t_flags *flags, va_list *param_ptr)
{
	t_list	*node;
	t_list	*cmd;
	long	nbr;

	node = ft_lstnew(ft_cpychar(' '));
	nbr = va_arg(*param_ptr, int);
	cmd = node;
	ft_putnbr_base(node, nbr, "0123456789");
	node = node->next;
	ft_lstdelone(cmd, &ft_delchar);
	ft_process_flags(&node, flags);
	return (ft_print_list(node));
}

int	ft_print_integer(t_flags *flags, va_list *param_ptr)
{
	t_list	*node;
	t_list	*cmd;
	long	nbr;

	node = ft_lstnew(ft_cpychar(' '));
	nbr = va_arg(*param_ptr, int);
	cmd = node;
	ft_putnbr_base(node, nbr, "0123456789");
	node = node->next;
	ft_lstdelone(cmd, &ft_delchar);
	ft_process_flags(&node, flags);
	return (ft_print_list(node));
}

int	ft_print_unsigned_decimal(t_flags *flags, va_list *param_ptr)
{
	t_list			*node;
	t_list			*cmd;
	unsigned long	p;

	p = (unsigned long int)(va_arg(*param_ptr, unsigned int));
	node = ft_lstnew(ft_cpychar(' '));
	cmd = node;
	ft_putnbr_base(node, p, "0123456789");
	node = node->next;
	ft_lstdelone(cmd, &ft_delchar);
	ft_process_flags(&node, flags);
	return (ft_print_list(node));
}

int	ft_print_hex(t_flags *flags, va_list *param_ptr, int low)
{
	t_list			*node;
	t_list			*cmd;
	unsigned int	p;
	char			*base;

	if (!low)
		base = ft_strdup("0123456789ABCDEF");
	else
		base = ft_strdup("0123456789abcdef");
	p = va_arg(*param_ptr, int);
	node = ft_lstnew(ft_cpychar(' '));
	cmd = node;
	ft_putnbr_base(node, p, base);
	node = node->next;
	ft_lstdelone(cmd, &ft_delchar);
	ft_process_flags(&node, flags);
	free (base);
	return (ft_print_list(node));
}

int ft_print_percentage(t_flags *flags)
{
	t_list	*node;

	node = ft_lstnew(ft_cpychar('%'));
	ft_process_flags(&node, flags);
	return (ft_print_list(node));
}
