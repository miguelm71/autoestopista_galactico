/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charmng.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:21:43 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/29 09:36:07 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"

char	*ft_cpychar(char c)
{
	char	*ch;

	ch = NULL;
	ch = malloc (1);
	//if (c > 0)
		*ch = c;
	return (ch);
}

void	ft_delchar(void *c)
{
	if (c != NULL)
		free (c);
}