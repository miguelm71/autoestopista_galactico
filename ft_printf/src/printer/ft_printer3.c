/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:24:58 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/04 19:19:04 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	ft_print_pointer(t_flags *flags, va_list *param_ptr)
{
	t_list	*node;
	t_list	*cmd;
	long	p;

	p = (long long int)(va_arg(*param_ptr, void *));
	node = ft_lstnew(ft_cpychar(' '));
	cmd = node;
	ft_put_pointer(node, p);
	node = node->next;
	ft_lstdelone(cmd, &ft_delchar);
	cmd = ft_lstnew(ft_cpychar('x'));
	ft_lstadd_front(&node, cmd);
	cmd = ft_lstnew(ft_cpychar('0'));
	ft_lstadd_front(&node, cmd);
	ft_process_flags(&node, flags, 0);
	return (ft_print_list(node));
}

int	ft_is_special(char *str)
{
	char	c;

	c = *str;
	if (c == '\t' || c == '\n' || c == '\v' || \
		c == '\f' || c == '\r')
		return (1);
	return (0);
}
