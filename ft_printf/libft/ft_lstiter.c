/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:35:14 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/10 12:00:56 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (!f)
		return ;
	node = lst;
	while (node)
	{
		(*f)(node->content);
		node = node->next;
	}
}
