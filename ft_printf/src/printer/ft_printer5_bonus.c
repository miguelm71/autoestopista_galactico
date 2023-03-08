/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer5_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:19:30 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/11 10:44:57 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf_bonus.h"

void	ft_process_flags(t_list **list, t_flags *flags, int nbr)
{
	char	t;

	t = flags->data_type;
	if (t == '%' && flags->width != -1)
		ft_fix_percentage_length(list, flags);
	if (t == 's' && flags->dot == 1 && flags->decimals > -1)
		ft_fix_string_length(list, flags->decimals);
	if ((t == 'd' || t == 'i' || t == 'u' || t == 'x' || t == 'X') \
			&& (flags->space == 1 || flags->plus == 1))
		ft_fix_signus_space(list, flags);
	if ((t == 'd' || t == 'i' || t == 'u' || t == 'x' || t == 'X') \
			&& flags->dot == 1 && flags->decimals >= -1)
		ft_fix_decimal_length(list, flags, nbr);
	if (flags->pad == 1 && (t == 'x' || t == 'X'))
		ft_set_base_ind(list, t);
	if (flags->width != -1)
		ft_fix_width(list, *flags);
}

void	ft_fix_string_length(t_list **list, int decimals)
{
	t_list	*node;
	t_list	*h;

	if (decimals < ft_lstsize(*list))
	{
		if (decimals == 0)
		{
			ft_lstclear(list, &ft_delchar);
		}
		else
		{
			h = ft_lstget(*list, decimals - 1);
			node = ft_lstget(*list, decimals);
			ft_lstclear(&node, &ft_delchar);
			h->next = NULL;
		}
	}
}

void	ft_fix_signus_space(t_list **list, t_flags *flags)
{
	t_list	*node;

	if (ft_isdigit((*(*list)->content)))
	{
		if (flags->plus == 1)
			node = ft_lstnew(ft_cpychar('+'));
		else
			node = ft_lstnew(ft_cpychar(' '));
		ft_lstadd_front(list, node);
	}
}

void	ft_set_base_ind(t_list **list, char t)
{
	t_list	*node;

	if ((*(*list)->content) == '0' && ft_lstsize(*list) == 1)
		node = NULL;
	else if (t == 'x')
	{
		node = ft_lstnew(ft_cpychar('x'));
		ft_lstadd_front(list, node);
		node = ft_lstnew(ft_cpychar('0'));
		ft_lstadd_front(list, node);
	}
	else if (t == 'X')
	{
		node = ft_lstnew(ft_cpychar('X'));
		ft_lstadd_front(list, node);
		node = ft_lstnew(ft_cpychar('0'));
		ft_lstadd_front(list, node);
	}
}
