/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:58:48 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/27 18:49:09 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;

	l = ft_strlen(s);
	if (start > l)
	{
		str = malloc (sizeof(char) * 1);
		str[0] = '\0';
	}
	str = malloc (sizeof(char) * (ft_strlen(s + start) + 1));
	if (!s || str == NULL)
		return (NULL);
	i = 0;
	while ((start < l) && (s[i] != '\0') && (i < len))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
