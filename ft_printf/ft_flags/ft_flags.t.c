/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.t.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:53:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/05 14:54:50 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X')
		return (1);
	else
		return (0);
}

static int	ft_is_flag(char c)
{
	if (c == '+' || c == '-' || c == ' ' || c == '.' || c == '#'
		|| ft_isdigit(c))
		return (1);
	else
		return (0);
}
