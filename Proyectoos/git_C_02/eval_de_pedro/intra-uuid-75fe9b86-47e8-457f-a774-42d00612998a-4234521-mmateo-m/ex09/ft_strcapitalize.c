/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:05:56 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/12 20:39:16 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	int	r;

	r = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		r = 1;
	return (r);
}

int	is_num(char c)
{
	int	r;

	r = 0;
	if (c >= 48 && c <= 57)
			r = 1;
	return (r);
}

void	to_upp_c(char *str, int i)
{
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
}

void	to_low_c(char *str, int i)
{
	if (str[i] >= 65 && str[i] <= 90)
		str[i] = str[i] + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
		{
			if (i == 0)
				to_upp_c(str, i);
			else
			{
				if (is_alpha(str[i - 1]) || is_num(str[i - 1]))
					to_low_c(str, i);
				else if (!is_alpha(str[i - 1]) && !is_num(str[i - 1]))
					to_upp_c(str, i);
			}
		}
		i++;
	}
	return (str);
}
