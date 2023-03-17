/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:55:03 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/17 21:11:10 by mmateo-m         ###   ########.fr       */
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
			return (-1) ;
	}
	return (n);
}

char	*get_next_line(int fd)
{
	char	*b;
	int		n_pos;
	int		c_read;

	if (fd <= 0)
		return (NULL);
	n_pos = -1;
	b = 0;
	while (n_pos < 0)
	{
		b = ft_increase_buf(b);
		if (b == NULL)
			return (NULL);
		c_read = read(fd, b, BUFFER_SIZE);
		n_pos = ft_have_n(b);
		if (c_read < BUFFER_SIZE && n_pos < 0)
			break ;
	}
	if (ft_strlen(b) > 0)
		b = ft_strdup(&b);
	else
	{
		free (b);
		b = NULL;
	}
	return (b);
}
