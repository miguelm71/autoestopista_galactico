/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:25:39 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/11 20:23:46 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		cont;
	char	*ptr;

	ptr = str;
	cont = 0;
	while (*ptr != '\0')
	{
		cont++;
		ptr++;
	}
	return (cont);
}