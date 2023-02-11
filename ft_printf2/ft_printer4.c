/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:19:47 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/11 15:24:00 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void	ft_process_flags(t_tp *tp, t_flags *flags, int nbr)
{
	if (tp->zero_l > 1)
	{
		flags->minus = nbr;
	}
}
