/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:36:02 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/18 16:42:44 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
