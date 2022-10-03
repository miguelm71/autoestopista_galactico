/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:50:44 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/10/03 14:41:13 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char c, char s);

static int	ft_get_words(const char *strg, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while(strg[i] != '\0')
	{
		if (!ft_is_sep (strg[i], sep))
		{
			if (!(ft_is_sep(strg[i],sep)) && (ft_is_sep(strg[i + 1], sep)))
			{
				words++;
			}
		}
		i++;
	}
	return (words);
}

static int	ft_is_sep(char c, char s)
{
	if (c == s || c == '\0')
		return (1);
	else
		return (0);
}


/* static int	ft_get_words(const char *str, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if (!ft_is_sep (str[i], sep))
		{
			if (!(ft_is_sep (str[i], sep)) && (ft_is_sep (str[i + 1], sep)))
				words++;
		}
		i++;
	}
	return (words);
} */

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;
	int		i;
	size_t	len;

	i = 0;
	words = ft_get_words(s, c);
	array = malloc(sizeof(char *) * (words +1));
	while (i < words)
	{
		if (!ft_is_sep(*s, c))
		{
			len = 0;
			while (!ft_is_sep(s[len], c))
				len++;
			array[i] = ft_substr(s, 0, len);
			s += (len + 1);
			i++;
		}
		else
			s++;
	}
	array[words] = 0;
	return (array);
}
 