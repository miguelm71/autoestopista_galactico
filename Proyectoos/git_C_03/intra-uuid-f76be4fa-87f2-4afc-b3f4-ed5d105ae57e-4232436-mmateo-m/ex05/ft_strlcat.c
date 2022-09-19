/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 07:50:38 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/14 16:52:18 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	int				i;

	i = 0;
	dest_l = get_len(dest);
	src_l = get_len(src);
	if (size < dest_l)
		return (size + src_l);
	if (src[0] == '\0')
		return (dest_l + size);
	while ((src[i] != '\0') && (size -1 > dest_l + i))
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (dest_l + src_l);
}