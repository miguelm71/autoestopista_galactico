/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:31:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/10 11:58:00 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size && (UINTPTR_MAX / size < nmemb))
		return (NULL);
	ptr = (void *)malloc (size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
