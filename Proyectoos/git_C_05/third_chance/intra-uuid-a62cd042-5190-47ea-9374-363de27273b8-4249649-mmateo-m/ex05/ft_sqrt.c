/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:56:17 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/20 10:42:36 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	error;
	int	med;
	int	raiz;

	raiz = nb;
	error = 0;
	med = 1;
	if (nb < 1)
		return (0);
	while ((raiz - med) / 2)
	{
		raiz = (raiz + med) / 2;
		med = nb / raiz;
	}
	if (raiz * raiz == nb)
		return (raiz);
	else
		return (0);
}
