/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer7_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:18:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/11 10:45:09 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf_bonus.h"

void	ft_fix_decimal_length(t_list **list, t_flags *flags, int nbr)
{
	int		n;
	int		minus;
	t_list	*node;

	minus = 0;
	if (flags->decimals <= 0 && nbr == 0 && ft_num_t(flags->data_type))
	{
		ft_fix_zero_decimal_length(list);
		return ;
	}
	if (*((*list)->content) == '-' || *((*list)->content) == ' ' \
			|| *((*list)->content) == '+')
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

void	ft_fix_zero_decimal_length(t_list **list)
{
	if (*((*list)->content) == '-' || *((*list)->content) == ' ' \
			|| *((*list)->content) == '+')
	{
		ft_lstdelone((*(list))->next, &ft_delchar);
		(*(list))->next = NULL;
		return ;
	}
	else
	{
		ft_lstclear(list, &ft_delchar);
		return ;
	}
}
