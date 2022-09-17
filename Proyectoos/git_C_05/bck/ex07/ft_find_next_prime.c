/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:26:03 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/19 15:35:13 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
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
