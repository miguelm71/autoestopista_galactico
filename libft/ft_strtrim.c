#include "libft.h"

static int ft_char_present(char const *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t stt;
	size_t end;
	char *r;

	stt = 0;
	while (s1[stt] && ft_char_present(set, s1[stt]))
		stt++;
	end = ft_strlen(s1);
	while (end > stt && ft_char_present(set, s1[end-1]))
		end--;
	r = (char*)malloc (sizeof(char) * (end - stt +1));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (stt < end)
		r[i++] = s1 [stt++];
	r[i] = '\0';
	return r;
}