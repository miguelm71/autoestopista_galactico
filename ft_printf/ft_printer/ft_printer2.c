/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:24:58 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/22 19:38:57 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"
#include "../tools/ft_tools.h"

static void	ft_print_decimal(t_flags *flags, va_list param_ptr)
{
	t_list	*node;
	t_list	*cmd;

	node = ft_lstnew(" ");
	cmd = node;
	ft_putnbr_base(node, (long int)(va_arg(param_ptr, long)), "0123456789");
	node = node->next;
	ft_lstdelone(cmd, &ft_delchar);
	//TODO process flags
	ft_print_list(node);
}