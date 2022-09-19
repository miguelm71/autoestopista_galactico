/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:24:20 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/16 14:11:50 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_d;
	unsigned int	i_s;

	i_d = 0;
	while (dest[i_d] != '\0')
		i_d++;
	i_s = 0;
	while ((src[i_s] != '\0') && (i_s < nb))
	{
		dest[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	dest[i_d] = '\0';
	return (dest);
}
