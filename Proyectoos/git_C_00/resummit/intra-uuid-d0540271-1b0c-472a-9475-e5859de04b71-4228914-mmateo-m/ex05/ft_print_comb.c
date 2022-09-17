/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:25:00 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/11 13:25:36 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_int(int digit1, int digit2, int digit3)
{
	char	character;

	character = digit1 + '0';
	write(1, &character, 1);
	character = digit2 + '0';
	write(1, &character, 1);
	character = digit3 + '0';
	write(1, &character, 1);
}

void	ft_print_comb(void)
{
	int		digit_1;
	int		digit_2;
	int		digit_3;

	digit_1 = 0;
	while (digit_1 <= 9)
	{
		digit_2 = digit_1 + 1;
		while (digit_2 <= 9)
		{
			digit_3 = digit_2 + 1;
			while (digit_3 <= 9)
			{
				ft_write_int(digit_1, digit_2, digit_3);
				if (digit_1 != 7 || digit_2 != 8 || digit_3 != 9)
				{
					write (1, ", ", 2);
				}
					digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}
