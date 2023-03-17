/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:55:08 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/17 21:13:29 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_calloc(char c, int size)
{
	char	*str;
	int		n;

	str = malloc (sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	n = 0;
	while (n < size)
	{
		str[n] = c;
		n++;
	}
	return (str);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char **s)
{
	int		len;
	char	*n;
	int		i;

	len = ft_strlen(*s);
	n = (char *)malloc (sizeof(char) * (len + 1));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[i] = (*s)[i];
		i++;
	}
	n[i] = '\0';
	free (*s);
	return (n);
}

char	*ft_increase_buf(char *s)
{
	int		len;
	char	*n;
	int		i;

	len = ft_strlen(s);
	n = ft_calloc('\0', (sizeof(char) * (BUFFER_SIZE + len + 1)));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[i] = s[i];
		i++;
	}
	free (s);
	n[i] = '\0';
	return (n);
}
