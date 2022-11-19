/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charmng.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:21:43 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/19 13:35:19 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"

static char	*ft_cpychar(char c)
{
	char	*ch;

	ch = NULL;
	ch = malloc (1);
	if (c != NULL)
		*ch = c;
	return (ch);
}

static void	ft_delchar(char *c)
{
	if (c != NULL)
		free (c);
}