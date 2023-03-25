/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:55:08 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/25 20:16:56 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_have_n(char *b)
{
	int	n;

	n = -1;
	if (b == NULL)
		return (-1);
	while (b[++n] != '\n')
	{
		if (b[n] == '\0' )
			return (-1);
	}
	return (n);
}

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

char	*ft_strdup_n(char **s, char **h)
{
	int		len;
	char	*n;
	int		i;
	int		n_pos;

	n_pos = ft_have_n(*s);
	len = n_pos + 1;
	if (n_pos == -1)
		len = ft_strlen(*s);
	n = (char *)malloc (sizeof(char) * (len + 1));
	if (n == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		n[i] = (*s)[i];
	n[i] = '\0';
	if (n_pos == -1)
	{
		*s = NULL;
		free (*h);
	}
	else
		*s = &((*s)[n_pos + 1]);
	return (n);
}

char	*ft_increase_buf(char **s, int blk)
{
	int		len;
	char	*n;
	int		i;
	char x;

	len = ft_strlen(*s);
	n = ft_calloc('\0', (sizeof(char) * (BUFFER_SIZE + len + 1)));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		x = (*s)[i];
		n[i] = x;
		i++;
	}
	free (*s);
	//n[i] = '\0';
	*s = n;
	n = &(n[BUFFER_SIZE * blk]);
	return (n);
}
