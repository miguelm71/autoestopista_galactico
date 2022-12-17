/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:56:00 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/17 13:25:31 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}
	return (((unsigned char)(str1[i])) - ((unsigned char)(str2[i])));
}
