/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:26:51 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/20 19:02:44 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*ptr;
	int	i;

	if (min >= max)
		return (NULL);
	len = (max - min) + 1;
	ptr = malloc(sizeof(int) * len);
	i = 0;
	while (min + i <= max)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
