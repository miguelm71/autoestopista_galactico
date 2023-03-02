/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:19:47 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/02 16:31:45 by mmateo-m         ###   ########.fr       */
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

int	ft_write_string(t_tp *tp, char *str, char t)
{
	int	i;
	int	n;

	n = 0;
	tp->cap_hex = 0;
	i = ft_strlen(str);
	if (t == 'c' && *str == 0)
	{
		write (1, "\0", 1);
		i = 1;
	}
	else
	{
		while (n < i && t != 0)
		{
			write(1, &(str[n]), 1);
			n++;
		}
	}
	free(tp);
	return (i);
}

void	ft_process_flags(t_tp *tp, t_flags *flags, char **str)
{
	if (tp->zero_l > 1 && *str != NULL)
	{
		flags->minus = **str;
	}
}
