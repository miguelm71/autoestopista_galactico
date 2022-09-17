/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:36:02 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/19 15:58:09 by mmateo-m         ###   ########.fr       */
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
