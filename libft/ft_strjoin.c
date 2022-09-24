/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:53:03 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/24 09:45:44 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*r;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	r = ft_calloc(l1 + l2 + 1, sizeof(char));
	if (s1 == NULL || s2 == NULL || r == NULL)
		return (NULL);
	ft_strlcpy(r, s1, l1);
	ft_strlcat(r, s2, l2);
	return (r);
}
