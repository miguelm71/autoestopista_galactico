/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:16:06 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/30 21:06:22 by mmateo-m         ###   ########.fr       */
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
		printf ("atoi: %d\n", atoi("999999999999999999999999"));
		printf ("atoi: %d\n", ft_atoi("999999999999999999999999"));
		
	}
}

int	main()
{
	printf ("%zu", ft_strlen(NULL));
}

//ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')