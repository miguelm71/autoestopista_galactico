/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:00:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/21 12:13:20 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*int_array;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	len = max - min;
	int_array = (int *)malloc(sizeof (*int_array) * len);
	if (int_array == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		int_array[i] = min + i;
		i++;
	}
	*range = int_array;
	return (len);
}
