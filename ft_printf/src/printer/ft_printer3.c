/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:19:30 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/13 18:29:51 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

 void	ft_process_flags_ (t_list *list, t_flags *flags)
{
	t_list	*p;

	p = ft_lstlast(list);
	p->next = 0;
	(*flags).data_type = 0;
} 
