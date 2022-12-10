/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:51:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/10 12:01:49 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	chr;

	chr = c;
	while (*str)
	{
		if (*str == (unsigned char)chr)
		{
			return ((char *)str);
		}
		str++;
	}
	if (chr == '\0')
		return ((char *)str);
	return (0);
}
