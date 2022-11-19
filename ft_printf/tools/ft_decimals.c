/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimals.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:18:18 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/19 14:29:42 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int ft_get_numdigits_decimalpart(double d)
{
	int	n;
	long long l1;
	
	n = 0;
	while((d  * 10 ^ n) - ((long int)(d * 10 ^ n)) != 0)
}