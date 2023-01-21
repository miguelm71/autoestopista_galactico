/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:47:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/21 18:02:04 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int	main(void)
{
	printf ("printf:\n");
	printf (" %.1s %.2s %.3s %.4s ", " - ", "", "4", "");
	printf ("]");
	printf ("\nft_printf:\n");
	ft_printf(" %.1s %.2s %.3s %.4s ", " - ", "", "4", "");
	printf ("]\n");
	return (1);
}
