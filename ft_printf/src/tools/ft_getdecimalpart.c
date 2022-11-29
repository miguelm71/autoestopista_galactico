/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdecimalpart.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:56:58 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/29 19:55:30 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"


long ft_ten_pow (int n)
{
	int i = 1;
	long l = 10;
	if (n == 0)
		return (1);
	else if (n == 1)
		return (10);
	while (i < n)
	{
		l = l * 10;
		i++;
	}
	return (l);
	
}

int ft_getdecimal (double nbr, int digits)
{
    double  d;
    int i;
    long p;

    if (digits == -1)
        digits = 6;
    i = 0;
    if (nbr < 0)
		nbr = nbr * -1;
    d = nbr - (long)nbr;
    while (d > 0 && i < digits)
	{
		i++;
		p = ft_ten_pow (i);
		d = (nbr * p) - (long)(nbr * p);
	}
    return ((nbr - (long)nbr) * (ft_ten_pow(digits)));
}

int main ()
{
    double d = 84.2341;
    printf ("el original: %f\n", d);
    printf ("parte decimal: %d\n", ft_getdecimal(d, -1));
    return (1);
}