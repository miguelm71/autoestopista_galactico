/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:03:31 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/13 14:47:23 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		hex_i;
	char	*hex;
	char	c;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] >= 0) && (str[i] < 32))
		{
			c = '\\';
			write(1, &c, 1);
			hex_i = str[i] / 16;
			write(1, &hex[hex_i], 1);
			hex_i = str[i] % 16;
			write(1, &hex[hex_i], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}
