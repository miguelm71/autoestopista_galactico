/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:44:33 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/24 13:21:51 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	int	i;

	if (dst < src)
	{
		i = 0;
		while (i < size)
		{
			*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
			i++;
		}
	}
	else
	{
		i = size - 1;
		while (i >= 0)
		{
			*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
			i--;
		}
	}
	return (dst);
}
