/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:43:18 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/18 12:51:19 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	has_signs(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	has_rept(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0' && (i <= (len - 1)))
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	get_base_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	get_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	str_len;
	int	number;
	int	weight;

	base_len = get_len(base);
	if (base_len < 2 || has_signs(base) || has_rept(base, base_len))
		return (0);
	str_len = get_len(str);
	number = 0;
	weight = 1;
	while (str_len -1 >= 0 && str[str_len - 1] != '-')
	{
		number = number + (get_base_index(base, str[str_len - 1]) * weight);
		weight = weight * base_len;
		str_len--;
	}
	if (str[0] == '-')
		number = number * -1;
	return (number);
}
