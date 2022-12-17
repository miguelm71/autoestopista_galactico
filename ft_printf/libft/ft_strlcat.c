/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:53:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/17 13:25:31 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	i;

	i = 0;
	dst_l = 0;
	while (dst_l < size && dst[dst_l])
		dst_l++;
	while ((dst_l + i + 1) < size && src[i])
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	if (dst_l != size)
		dst[dst_l + i] = '\0';
	return (dst_l + ft_strlen(src));
}
