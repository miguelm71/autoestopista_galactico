/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:47:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/13 18:45:23 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"



int	main(void)
{
	printf ("printf:\n");
	printf ("%1s", "");
	printf ("\nft_printf:\n");
	ft_printf("%1s", "");
	printf ("\n");
	return (1);
}
