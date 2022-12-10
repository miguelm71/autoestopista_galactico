/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:57:06 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/10 12:02:18 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*r;
	char	cc;

	r = 0;
	cc = (char)c;
	while (*s)
	{
		if (*s == cc)
			r = s;
		s++;
	}
	if (cc == '\0')
		r = s;
	return (r);
}
