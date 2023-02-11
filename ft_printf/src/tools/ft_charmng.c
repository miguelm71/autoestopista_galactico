/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charmng.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:21:43 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/11 11:50:01 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	*ft_cpychar(char c)
{
	char	*ch;

	ch = NULL;
	ch = malloc (1);
	if (ch == NULL)
		return (NULL);
	*ch = c;
	return (ch);
}

void	ft_delchar(void *c)
{
	if (c != NULL)
		free (c);
}

int	ft_num_t(char t)
{
	if ((t == 'd' || t == 'i' || \
			t == 'u' || t == 'x' || t == 'X'))
		return (1);
	return (0);
}
