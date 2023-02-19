/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:51:31 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/19 08:57:52 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_write_char(t_tp *tp, char c)
{
	tp->cap_hex = 0;
	write (1, &c, 1);
	free (tp);
	return (1);
}

int	ft_write_string(t_tp *tp, char *str)
{
	int	i;
	int	n;

	n = 0;
	tp->cap_hex = 0;
	i = ft_strlen(str);
	while (n < i)
	{
		write(1, &(str[n]), 1);
		n++;
	}
	free(tp);
	return (i);
}
