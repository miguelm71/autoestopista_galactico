/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:56:49 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/17 13:25:31 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	to_find_l;

	to_find_l = ft_strlen(little);
	if (to_find_l == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big != '\0' && (len-- >= to_find_l))
	{
		if (ft_strncmp(big, little, to_find_l) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
