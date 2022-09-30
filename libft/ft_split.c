/* /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:50:44 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/09/29 18:55:57 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

static int	ft_is_sep(char c, char s)
{
	if (c == s || c == '\0')
		return (1);
	else
		return (0);
}

static int	ft_words(const char *str, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_sep (str[i], sep))
		{
			if (!(ft_is_sep (str[i], sep)) && (ft_is_sep (str[i + 1], sep)))
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

static char	*ft_add_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = c;
	str[i + 1] = '\0';
	return (str);
}

static void	ft_split_words(const char *str, char c, char **array, int *words)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_sep(str[i], c))
		{
			array[*words] = ft_add_char(array[*words], str[i]);
			if (!ft_is_sep(str[i], c) && ft_is_sep(str[i + 1], c))
			{
				(*words)++;
				if (str[i +1])
					i += 1;
			}
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;
	int		i;
	int		substring_len;

	i = 0;
	substring_len = ft_strlen(s);
	words = ft_words(s, c);
	array = malloc(sizeof(char *) * (words +1));
	while (i < words)
	{
		array[i] = malloc (sizeof(char) * (substring_len + 1));
		array[i][0] = '\0';
		i++;
	}
	array[words] = 0;
	words = 0;
	ft_split_words(s, c, array, &words);
	return (array);
}
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:02:38 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/11/21 20:30:08 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}