/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer6_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:19:30 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/04 15:54:32 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

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
	char	t;

	t = flags.data_type;
	i = ft_lstsize(*list);
	if (*list == NULL && flags.width > 0 && flags.data_type != 's')
	{
		ft_jfy_right(list, flags.width, ' ');
		return ;
	}
	if (i < flags.width)
	{
		if (flags.minus == 1)
			ft_jfy_right(list, flags.width - ft_lstsize(*list), ' ');
		else
		{
			if (flags.zero == 1 && flags.dot != 1)
				ft_fix_width2(t, list, flags, (char *)((*list)->content));
			else
				ft_jfy_left(list, flags.width - ft_lstsize(*list), ' ');
		}
	}
}

void	ft_fix_width2(char t, t_list **list, t_flags flags, char *minos)
{
	t_list	*node;

	if (((t == 'd' || t == 'i' || t == 'u') || \
		((t == 'x' || t == 'X') && flags.pad == -1)) && \
		(*minos == '-' || *minos == '+' || *minos == ' '))
	{
		node = (*list)->next;
		ft_jfy_left(&node, flags.width - ft_lstsize(*list), '0');
		(*list)->next = node;
	}
	else if ((t == 'x' || t == 'X') && flags.pad == 1 && \
		(*minos == '-' || *minos == '+' || *minos == ' '))
	{
		node = ft_lstget(*list, 3);
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
