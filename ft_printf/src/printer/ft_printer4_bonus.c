/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer4_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:19:30 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/29 15:31:32 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

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

void	ft_fix_decimal_length(t_list **list, t_flags *flags, int nbr)
{
	int		n;
	int		minus;
	t_list	*node;
	char	t;

	minus = 0;
	t = flags->data_type;
	if (flags->decimals <= 0 && nbr == 0 && (t == 'd' || t == 'i' || t == 'u' || t == 'x' || t == 'X')){
		ft_lstclear(list, &ft_delchar);
		return;
	}
	if (*((*list)->content) == '-' || *((*list)->content) == ' ' || *((*list)->content) == '+')
		minus = 1;
	n = ft_lstsize(*list) - minus;
	if (minus == 1)
	{
		if (n < flags->decimals)
		{
			node = (*list)->next;
			ft_jfy_left(&node, flags->decimals - n, '0');
			(*list)->next = node;
		}
	}
	else
		ft_jfy_left(list, flags->decimals - n, '0');
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

void	ft_fix_percentage_length(t_list **list, t_flags *flags)
{
	if (flags->minus == 1)
		ft_jfy_right(list, flags->width - ft_lstsize(*list), ' ');
	else
		ft_jfy_left(list, flags->width - ft_lstsize(*list), ' ');
}

void	ft_fix_width(t_list **list, t_flags flags)
{
	int		i;
	t_list	*node;
	char t;
	char *minos;

	t = flags.data_type;
	i = ft_lstsize(*list);
	if (*list == NULL && flags.width > 0 && flags.data_type != 's')
	{
		ft_jfy_right(list, flags.width, ' ');
		return;
	}
	if (i < flags.width)
	{
		if (flags.minus == 1)
			ft_jfy_right(list, flags.width - ft_lstsize(*list), ' ');
		else
		{
			if (flags.zero == 1 && flags.dot != 1)
			{
				minos = (char *)((*list)->content);
				if ((t == 'd' || t == 'i' || t == 'u') && (*minos == '-' || *minos == '+' || *minos == ' '))
				{
					node = (*list)->next;
					ft_jfy_left(&node, flags.width - ft_lstsize(*list), '0');
					(*list)->next = node;
				}
				else if ((t == 'x' || t == 'X') && flags.pad == 1  && (*minos == '-' || *minos == '+' || *minos == ' '))
				{
					node = ft_lstget(*list, 3);
					ft_jfy_left(&node, flags.width - ft_lstsize(*list), '0');
					(*list)->next = node;
				}
				else if ((t == 'x' || t == 'X') && flags.pad == -1  && (*minos == '-' || *minos == '+' || *minos == ' '))
				{
					node = (*list)->next;
					ft_jfy_left(&node, flags.width - ft_lstsize(*list), '0');
					(*list)->next = node;
				}
				else if ((t == 'x' || t == 'X') && flags.pad == 1)
				{
					node = ft_lstget(*list, 2);
					ft_jfy_left(&node, flags.width - ft_lstsize(*list), '0');
					(*list)->next->next = node;
				}
				else
					ft_jfy_left(list, flags.width - ft_lstsize(*list), '0');
			}
			else
				ft_jfy_left(list, flags.width - ft_lstsize(*list), ' ');
		}
	}
}
