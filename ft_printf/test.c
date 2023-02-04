/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:47:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/04 18:33:52 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int	main(void)
{
	int n;
	int m;

	printf ("printf:\n");
	n = printf("%s", "");
	printf ("]");
	printf ("\nft_printf:\n");
	m = ft_printf("%s", "");
	printf ("]\n");

	printf ("p_n=%d     ft_p_m=%d", n, m);
	return (1);
}
/*
printf:
^.^/0x000000000000000000000000000000000000000000000000007a235196^.^/]
ft_printf:
^.^/0000000000000000000000000000000000000000000000000007a235196^.^/]
*/