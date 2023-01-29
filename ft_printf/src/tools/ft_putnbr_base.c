/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:02:09 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/29 13:09:59 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	t_list		*node;

	mi_nbr = nbr;
	len = ft_get_len(base);
	if (len < 2 || ft_has_rept(base, len) || ft_has_signs(base))
		return ;
	if (mi_nbr < 0)
	{
		mi_nbr = mi_nbr * -1;
		node = ft_lstnew(ft_cpychar('-'));
		ft_lstadd_back(&head, node);
	}
	if (mi_nbr < len)
	{
		node = ft_lstnew(ft_cpychar(base[mi_nbr]));
		ft_lstadd_back(&head, node);
	}
	else
	{
		ft_putnbr_base(head, mi_nbr / len, base);
		ft_putnbr_base(head, mi_nbr % len, base);
	}
}

void	ft_put_pointer(t_list *head, unsigned long nbr)
{
	unsigned int	len;
	unsigned long	mi_nbr;
	t_list			*node;
	char			*g_base;

	g_base = "0123456789abcdef";
	mi_nbr = nbr;
	len = ft_strlen(g_base);
	if (mi_nbr < len)
	{
		node = ft_lstnew(ft_cpychar(g_base[mi_nbr]));
		ft_lstadd_back(&head, node);
	}
	else
	{
		ft_put_pointer(head, mi_nbr / len);
		ft_put_pointer(head, mi_nbr % len);
	}
}