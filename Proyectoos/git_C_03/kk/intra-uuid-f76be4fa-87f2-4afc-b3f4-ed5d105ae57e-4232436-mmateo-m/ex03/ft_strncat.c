/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:24:20 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/13 16:31:03 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*de;
	char			*or;

	i = 0;
	de = dest;
	or = src;
	while (*de != '\0')
		de++;
	while ((or != '\0') && (i < nb))
	{
		*de = *or;
		de++;
		or++;
		i++;
	}
	*de = '\0';
	return (dest);
}
