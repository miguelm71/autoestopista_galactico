/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:12:45 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/06 19:41:45 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

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
	int		c;
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
		node = ft_lstnew(ft_cpychar(*str));
		if (node == NULL)
			return (0);
		ft_lstadd_back(&head, node);
		str++;
	}
	ft_process_flags(&head, flags, 0);
	return (ft_print_list(head));
}

int	ft_add_char_node(t_list **list, char c)
{
	t_list	*node;

	node = ft_lstnew(&c);
	if (!node)
		return (-1);
	if (list == NULL)
		list = &node;
	else
		ft_lstadd_back(list, node);
	return (0);
}
