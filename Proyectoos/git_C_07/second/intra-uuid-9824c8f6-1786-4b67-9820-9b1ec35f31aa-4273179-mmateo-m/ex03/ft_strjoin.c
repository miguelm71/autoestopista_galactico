/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:38:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/22 12:30:06 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len( char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_get_total_len(int size, char**strs, char *sep)
{
	int		i;
	int		sep_len;
	int		cont;

	sep_len = ft_len(sep);
	cont = sep_len * -1;
	i = -1;
	while (++i < size)
	{
		cont = sep_len + ft_len(strs[i]);
	}
	return (cont);
}

char	*ft_strcpy(char *dst, char*src)
{
	while (*src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
	}
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	char	*res;
	int		arr_len;
	int		i;

	if (size == 0)
	{
		arr = (char *)malloc (sizeof(*arr));
		return (arr);
	}
	arr_len = ft_get_total_len(size, strs, sep) + 1;
	arr = (char *)malloc(sizeof(char) * arr_len);
	res = arr;
	if (arr == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		arr = ft_strcpy(arr, strs[i]);
		if (i + 1 < size)
			arr = ft_strcpy(arr, sep);
	}
	*arr = '\0';
	return (res);
}
