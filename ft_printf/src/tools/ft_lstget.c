/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:40:06 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/25 19:19:33 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"

t_list	*ft_lstget(t_list *node, int n)
{
	int	i;

	i = 1;
	while (node->next != NULL && i <= n)
	{
		node = node->next;
		i++;
	}
	return (node);
}