/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:55:03 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/11 17:05:35 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*get_next_line(int fd)
{
	char	*b;
	char	*h;
	int		c;
	int		bl;

	bl = 0;
	if (fd <= 0)
		return (NULL);
	h = ft_increase_buf(&bl, NULL);
	if (h == NULL)
		return (NULL);
	b = h;

	c = read(fd, b, 1);
	while (c == 1 && *b != '\n')
	{
		b++;
		c = read(fd, b, 1);
		if ((int)ft_strlen(h) == (1024 * bl))
		{
			h = ft_increase_buf(&bl, h);
			if (h == NULL)
				return (NULL);
			b = h + (((bl - 1) * 1024) - 1);
		}
	}
	if (c <= 0 && ft_strlen(h) == 0){
		free(h);
		return (NULL);
	}
	if (ft_strlen(h) > 0)
		b = ft_strdup(h);
	free(h);
	return (b);
}