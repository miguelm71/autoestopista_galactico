/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:53:42 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/24 17:53:47 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdio.h>

int	example(void)
{
	char		*file_name;
	int			size;
	char		*value;
	number_d	*lista;
	int			f;

	f = 0;
	file_name = "./numbers.dict";
	size = ft_get_file_lines(file_name);
	lista = ft_create_table(size);
	ft_read_file(file_name, lista, &f);
	value = ft_get_value(lista, size, "100");
	printf ("value recuperado: %s\n", value);
	return (0);
}

int	main(void)
{
	example();
}
