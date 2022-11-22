/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:02:09 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/22 19:03:10 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../ft_printf.h"
#include "../ft_flags/ft_flags.h"
#include "../ft_printer/ft_printer.h"
#include "ft_tools.h"

int	ft_get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_has_rept(char *str, int len)
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

int	ft_has_signs(char *str)
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

void	ft_putnbr_base(t_list *head, long int nbr, char *base)
{
	int			len;
	long int	mi_nbr;
	char		*c;
	t_list		*node;

	mi_nbr = nbr;
	len = ft_get_len(base);
	if (len < 2 || ft_has_rept(base, len) || ft_has_signs(base))
		return ;
	if (mi_nbr < 0)
	{
		mi_nbr = mi_nbr * -1;
		ft_write_char ('-');
	}
	if (mi_nbr < len)
	{
		node = ft_lstnew(ft_cpychar(base[mi_nbr]));
		ft_lstadd_back(head, node);
	}
	else
	{
		ft_putnbr_base(mi_nbr / len, base);
		ft_putnbr_base(mi_nbr % len, base);
	}
}

/* int main()
{
	char *p = strdup("hola");
	ft_putnbr_base((long int)p, "0123456789abcdef");
	printf("\nel puntero es: %p\n", p);
	return (0);
}
 */