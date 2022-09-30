/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:16:06 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/29 18:50:48 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	print_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		printf ("i[%d]=%s_ len: %ld\n", i, arr[i], ft_strlen(arr[i]));
		i++;
	}
}

void	main(void)
{
	char	**tabstr;
	char	*splitme;

	splitme = strdup("--1-2--3---4----5-----42");
	tabstr = ft_split(splitme, '-');
	print_array(tabstr);
}
