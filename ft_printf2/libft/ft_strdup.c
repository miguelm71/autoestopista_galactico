/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:51:49 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/05 13:33:38 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*n;
	int		i;

	len = ft_strlen(s);
	n = (char *)malloc (sizeof(char) * (len + 1));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
