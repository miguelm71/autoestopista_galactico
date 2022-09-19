/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:53:07 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/26 12:11:02 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>

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

char	*ft_add_char(char *str, char c, int size)
{
	char	*n_str;
	int		i;

	if (size == 0)
	{
		n_str = malloc (sizeof(char) * 2);
		n_str[0] = c;
		n_str[1] = '\0';
	}
	else
	{
		n_str = malloc (sizeof(char) * (size + 2));
		i = 0;
		while (i < size)
		{
			n_str[i] = str[i];
			i++;
		}
		n_str[i] = c;
		n_str[i + 1] = '\0';
	}
	free (str);
	return (n_str);
}

void	ft_split_words(char *str, char *sep, char **array, int *words)
{
	int		i;
	char	*string;
	int		size;

	i = 0;
	string = (char *)malloc (sizeof(char));
	while (str[i] != '\0')
	{
		if (!ft_is_sep(str[i], sep))
		{
			size = 0;
			while (string[size] != '\0')
				size++;
			string = ft_add_char(string, str[i], size);
			if (!ft_is_sep(str[i], sep) && ft_is_sep(str[i + 1], sep))
			{
				array[(*words)++] = string;
				string = (char *)malloc (sizeof(char));
				string[0] = '\0';
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

	words = ft_words(str, charset);
	array = malloc(sizeof(char *) * (words +1));
	array[words] = 0;
	words = 0;
	ft_split_words(str, charset, array, &words);
	return (array);
}
