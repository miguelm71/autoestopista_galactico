/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:16:06 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/10/09 10:51:51 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char    n[40] = "99999999999999999999999999";

    int             i1 = atoi(n);
    int             i2 = ft_atoi(n);
	printf("n: %s\n",n);
	printf ("atoi: %d\n", i1);
	printf ("ft_atoi: %d\n", i2);	
	if (i1 == i2)
		printf ("success!!!\n");
	else
		printf ("fail!!! :(\n");	
}
