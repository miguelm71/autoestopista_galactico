/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:55:03 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/25 20:12:46 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char static	*head;
	char static	*pos;
	int			n_pos;
	int			c_read;
	int			blk;

	if (fd <= 0)
		return (NULL);
	n_pos = -1;
	blk = -1;
	head = 0;
	pos = head;
	if (ft_have_n(pos) == -1)
	{
		while (n_pos < 0)
		{
			pos = ft_increase_buf(&head, ++blk);
			if (head == NULL)
				return (NULL);
			c_read = read(fd, pos, BUFFER_SIZE);
			n_pos = ft_have_n(head);
			if (c_read < BUFFER_SIZE || (-1 < n_pos && n_pos < (BUFFER_SIZE * (blk + 1))))
				break ;
		}
	}
	if (ft_strlen(head) > 0)
	{
		return (ft_strdup_n(&pos, &head));
	}
	else
	{
		free (head);
		head = NULL;
		return (NULL);
	}
}
