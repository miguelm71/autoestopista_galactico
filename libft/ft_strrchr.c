/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:57:06 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/24 14:15:47 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*r;

	r = 0;
	while (*s)
	{
		if (*s == c)
			r = s;
		s++;
	}
	if (c == '\0')
		r = s;
	return (r);
}
