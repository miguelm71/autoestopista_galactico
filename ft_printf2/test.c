/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:47:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/22 16:09:02 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int	main(void)
{
	int	n;
	int	m;

	printf ("printf:\n");
	n = printf(";p]1/^(MN%xO`]0%c\r3\r(+:t(\v{%pNH`G*%ij", -1013443380, 840100864, (void *)-4904886001540910798, 151131924);
	printf ("]");
	printf ("\nft_printf:\n");
	m = ft_printf(";p]1/^(MN%xO`]0%c\r3\r(+:t(\v{%pNH`G*%ij", -1013443380, 840100864, (void *)-4904886001540910798, 151131924);
	printf ("]\n");
	printf ("p_n=%d     ft_p_m=%d", n, m);
	return (1);
}
