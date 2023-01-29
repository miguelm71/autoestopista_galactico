/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:12:45 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/29 14:04:34 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

int	ft_print_param(t_flags *flags, va_list *param_ptr)
{
	int		r;

	r = -1;
	if (flags->data_type == 'c')
		r = ft_print_char(flags, param_ptr);
	else if (flags->data_type == 's')
		r = ft_print_string(flags, param_ptr);
	else if (flags->data_type == 'p')
		r = ft_print_pointer(flags, param_ptr);
	else if (flags->data_type == 'd')
		r = ft_print_decimal(flags, param_ptr);
	else if (flags->data_type == 'i')
		r = ft_print_integer(flags, param_ptr);
	else if (flags->data_type == 'u')
		r = ft_print_unsigned_decimal(flags, param_ptr);
	else if (flags->data_type == 'x')
		r = ft_print_hex(flags, param_ptr, 1);
	else if (flags->data_type == 'X')
		r = ft_print_hex(flags, param_ptr, 0);
	else if (flags->data_type == '%')
		r = ft_print_percentage(flags);
	return (r);
}

int	ft_print_list(t_list *list)
{
	int		n;
	t_list	*node;
	char	*mio;

	n = 0;
	node = list;
	while (node != NULL)
	{
		if (node->content != NULL)
		{
			mio = (char *)(node->content);
			write(1, mio, 1);
			n++;
			node = node->next;
		}
		else
			break ;
	}
	if (list != NULL)
		ft_lstclear(&list, &ft_delchar);
	return (n);
}

int	ft_print_char(t_flags *flags, va_list *param_ptr)
{
	int	c;
	t_list	*node;

	c = va_arg(*param_ptr, int);
	node = ft_lstnew(ft_cpychar(c));
	if (node == NULL)
		return (-1);
	ft_process_flags(&node, flags, 0);
	return (ft_print_list(node));
}

int	ft_print_string(t_flags *flags, va_list *param_ptr)
{
	char	*str;
	t_list	*head;
	t_list	*node;

	head = NULL;
	str = va_arg(*param_ptr, char *);
	if (str == NULL)
		str = "(null)";
	while (str != NULL && *str != '\0')
	{
		if (head == NULL)
		{
			head = ft_lstnew(ft_cpychar(*str));
			if (head == NULL)
				return (0);
			str++;
			continue;
		}
		node = ft_lstnew(ft_cpychar(*str));
		if (node == NULL)
			return (0);
		ft_lstadd_back(&head, node);
		str++;
	}
	ft_process_flags(&head, flags,0);
	return (ft_print_list(head));
}

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
	char c;

	c = *str;
	if (c == '\t' || c == '\n' || c == '\v' || \
		    c == '\f' || c == '\r')
			return (1);
	return (0);
}
