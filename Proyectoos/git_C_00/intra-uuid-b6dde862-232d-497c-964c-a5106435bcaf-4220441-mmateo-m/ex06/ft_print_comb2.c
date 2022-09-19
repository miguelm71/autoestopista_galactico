/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:24:49 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/10 13:26:00 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(int high, int low)
{
	char	high_c;
	char	low_c;

	high_c = high + '0';
	low_c = low + '0';
	write (1, &high_c, 1);
	write (1, &low_c, 1);
}

void	write_two_digits_int(int number)
{
	int	high;
	int	low;

	if (number >= 10)
	{
		high = number / 10;
		low = number % 10;
	}
	else
	{
		high = 0;
		low = number;
	}
	ft_print_digits(high, low);
}

void	ft_print_comb2(void)
{
	int	nibble1;
	int	nibble2;

	nibble1 = 0;
	nibble2 = 1;
	while (nibble1 <= 99)
	{
		while (nibble2 <= 99)
		{
			write_two_digits_int(nibble1);
			write (1, " ", 1);
			write_two_digits_int(nibble2);
			if (!(nibble1 == 98) || !(nibble2 == 99))
				write(1, ", ", 2);
			nibble2++;
		}
		nibble1 ++;
		nibble2 = nibble1 + 1;
	}
}
