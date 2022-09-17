/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:54:42 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/10 11:12:47 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		num;
	char	character;

	num = 0;
	while (num <= 9)
	{
		character = num + '0';
		write(1, &character, 1);
		num++;
	}
}
