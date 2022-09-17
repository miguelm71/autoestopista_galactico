/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:35:42 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/19 09:52:02 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		write (1, ptr, 1);
		ptr++;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc >= 1)
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
