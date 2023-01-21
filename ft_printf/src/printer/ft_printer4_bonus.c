/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer4_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:19:30 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/21 17:56:57 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

void	ft_process_flags(t_list **list, t_flags *flags)
{
	if (flags->data_type == 's' && flags->dot == 1 && flags->decimals > -1)
		ft_fix_string_length(list, flags->decimals);
	if (flags->width != -1)
		ft_fix_width(list, *flags);
}

void	ft_fix_string_length(t_list **list, int decimals)
{
	int		n;
	t_list	*node;
	t_list	*h;

	n = 0;
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

void	ft_jfy_right(t_list **list, int num_chars, char c)
{
	int		i;
	t_list	*node;

	i = 0;
	while (i < num_chars)
	{
		node = ft_lstnew(ft_cpychar(c));
		ft_lstadd_back(list, node);
		i++;
	}
}

void	ft_jfy_left(t_list **list, int num_chars, char c)
{
	int		i;
	t_list	*node;

	i = 0;
	while (i < num_chars)
	{
		node = ft_lstnew(ft_cpychar(c));
		ft_lstadd_front(list, node);
		i++;
	}
}

void	ft_fix_width(t_list **list, t_flags flags)
{
	int		i;
	t_list	*node;
	char t;
	char *minos;

	i = ft_lstsize(*list);
	if (i < flags.width)
	{
		if (flags.minus == 1)
			ft_jfy_right(list, flags.width - ft_lstsize(*list), ' ');
		else
		{
			if (flags.zero == 1)
			{
				t = flags.data_type;
				minos = (char *)((*list)->content);
				if ((t == 'd' || t == 'i') && *minos == '-')
				{
					node = (*list)->next;
					ft_jfy_left(&node, flags.width - ft_lstsize(*list), '0');
					(*list)->next = node;
				}
				else
					ft_jfy_left(list, flags.width - ft_lstsize(*list), '0');
			}
			else
				ft_jfy_left(list, flags.width - ft_lstsize(*list), ' ');
		}
	}
}
