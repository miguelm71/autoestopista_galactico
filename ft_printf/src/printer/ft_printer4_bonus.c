/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer4_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:19:30 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/13 18:38:44 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

void	ft_process_flags(t_list **list, t_flags *flags)
{
	if (flags->width != -1)
		ft_fix_width(list, *flags);
}

void	ft_justify_right(t_list **list, int num_chars, char c)
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

void	ft_justify_left(t_list **list, int num_chars)
{
	int		i;
	t_list	*node;

	i = 0;
	while (i < num_chars)
	{
		node = ft_lstnew(ft_cpychar(' '));
		ft_lstadd_front(list, node);
		i++;
	}
}

void	ft_fix_width(t_list **list, t_flags flags)
{
	int	i;

	i = ft_lstsize(*list);
	if (i < flags.width)
	{
		if (flags.minus == 1 && flags.zero == 1)
			ft_justify_right(list, flags.width - ft_lstsize(*list), '0');
		else if (flags.minus == 1 && flags.zero != 1)
			ft_justify_right(list, flags.width - ft_lstsize(*list), ' ');
		else
			ft_justify_left(list, flags.width - ft_lstsize(*list));
	}
}
