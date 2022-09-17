/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:03:31 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/12 20:46:40 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		index;
	int		hex_index;
	char	*hex;
	char	c;

	index = 0;
	hex = "0123456789abcdef";
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] == 127)
		{
			c = '\\';
			write(1, &c, 1);
			hex_index = hex[index] / 16;
			write(1, &hex[hex_index], 1);
			hex_index = hex[index] % 16;
			write(1, &hex[hex_index], 1);
		}
		else
			write (1, &str[index], 1);
		index++;
	}
}
