/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:26:03 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/20 17:45:04 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if ((nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	i = 5;
	while (i * i < nb)
	{
		if ((nb % i == 0) || (nb % (i + 2) == 0))
			return (0);
		i = i + 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	next = nb + 1;
	while (next < 2147483647)
	{
		if (ft_is_prime(next))
			return (next);
		next++;
	}
	return (-1);
}
