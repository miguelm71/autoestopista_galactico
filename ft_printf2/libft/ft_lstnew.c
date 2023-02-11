/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:41:01 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/07 17:16:28 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	if (content == NULL)
		return (NULL);
	nodo = (t_list *)malloc(sizeof(t_list));
	if (nodo == NULL)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
