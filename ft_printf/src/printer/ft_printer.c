/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:12:45 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/28 19:55:46 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

int	ft_print_param(t_flags *flags, va_list param_ptr)
{
	t_list	*attribute;
	int		r;

	attribute = ft_lstnew(NULL);
	if (flags->data_type == 'c')
		r = ft_print_char(attribute, param_ptr);
	else if (flags->data_type == 's')
		r = ft_print_string(attribute, param_ptr);
	else if (flags->data_type == 'p')
		r = ft_print_pointer(attribute, param_ptr);
	else if (flags->data_type == 'd')
		r = ft_print_decimal(attribute, param_ptr);
	else if (flags->data_type == 'i')
		r = ft_print_integer(attribute, param_ptr);
	else if (flags->data_type == 'u')
		r = ft_print_unsigned_decimal(attribute, param_ptr);
	else if (flags->data_type == 'x')
		r = ft_print_hex(attribute, param_ptr, 1);
	else if (flags->data_type == 'X')
		r = ft_print_hex(attribute, param_ptr, 0);
	else
		return (-1);	
	return (r);
}

static int	ft_print_list(t_list *list)
{
	int		n;
	t_list	*node;

	n = 0;
	node = list;
	while (node != NULL)
	{
		if (list->content != NULL)
		{
			ft_putchar_fd(list->content, 1);
			n++;
			node = node->next;
		}
		else
			break ;
	}
	ft_lstclear(list, &ft_delchar);
	return (n);
}

static int	ft_print_char(t_flags *flags, va_list param_ptr)
{
	char	c;
	t_list	*node;

	c = va_arg(param_ptr, char);
	node = ft_lstnew(&c);
	//TODO proccess flags
	if (node != NULL)
		return (-1);
	return (ft_print_list(node));
}

static int	ft_print_string(t_list *attribute, va_list param_ptr)
{
	char	*str;
	t_list	*head;
	t_list	*node;

	str = va_arg(param_ptr, char *);
	if (*str)
	{
		head = ft_lstnew(str);
		if (head == NULL)
			return ;
	}
	str++;
	while (*str)
	{
		node = ft_lstnew(str);
		if (node == NULL)
			return ;
		ft_lstadd_back(head, node);
	}
	//TODO processs flags
	return (ft_print_list(head));
}

static int	ft_print_pointer(t_list *attribute, va_list param_ptr)
{
	t_list	*node;
	t_list	*cmd;
	long	p;

	p = (long int)(va_arg(param_ptr, void *));
	node = ft_lstnew(" ");
	cmd = node;
	ft_putnbr_base(node, p, "0123456789abcdef");
	node = node->next;
	ft_lstdelone(cmd, &ft_delchar);
	//TODO process flags
	cmd = ft_lstnew(ft_cpychar("x"));
	ft_lstadd_front(node, cmd);
	cmd = ft_lstnew(ft_cpychar("0"));
	ft_lstadd_front(node, cmd);
	return (ft_print_list(node));
}
