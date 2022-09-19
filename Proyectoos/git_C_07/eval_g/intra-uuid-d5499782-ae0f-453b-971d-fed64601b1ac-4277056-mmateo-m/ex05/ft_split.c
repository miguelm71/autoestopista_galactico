/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:53:07 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/25 19:53:09 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep_array)
{
	int	i;

	i = 0;
	while (sep_array[i] != '\0')
	{
		if (c == sep_array[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_words(char *str, char *sep_array)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_sep(str[i], sep_array))
		{
			if (!ft_is_sep(str[i], sep_array) && \
				ft_is_sep(str[i + 1], sep_array))
			{
				words++;
				if (str[i +1])
					i += 1;
			}
		}
		i++;
	}
	return (words);
}

char	*ft_add_char(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = c;
	str[i + 1] = '\0';
	return (str);
}

void	ft_split_words(char *str, char *sep, char **array, int *words)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_sep(str[i], sep))
		{
			array[*words] = ft_add_char(array[*words], str[i]);
			if (!ft_is_sep(str[i], sep) && ft_is_sep(str[i + 1], sep))
			{
				(*words)++;
				if (str[i +1])
					i += 1;
			}
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**array;
	int		i;
	int		substring_len;

	i = 0;
	substring_len = 0;
	while (str[substring_len] != '\0')
		substring_len++;
	words = ft_words(str, charset);
	array = malloc(sizeof(char *) * (words +1));
	while (i < words)
	{
		array[i] = malloc (sizeof(char) * (substring_len + 2));
		array[i][0] = '\0';
		i++;
	}
	array[words] = 0;
	words = 0;
	ft_split_words(str, charset, array, &words);
	return (array);
}
