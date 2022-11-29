/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:19:30 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/29 21:30:38 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

#ifdef BONUS

void	ft_process_flags(t_list *list, t_flags *flags)
{
	ft_putchar ("1");
	return (0);
}

#else

void	ft_process_flags(t_list *list, t_flags *flags)
{
	ft_putchar("2");
}

#endif