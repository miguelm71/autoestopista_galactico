/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:03:35 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/19 11:02:18 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_print_decimal(t_flags *flags, va_list *param_ptr)
{
	long	p;
	char	*str;
	t_tp	*tp;
	int		n;

	tp = ft_init_to_print();
	p = (long int)(va_arg(*param_ptr, int));
	str = ft_d2string(p, "0123456789");
	if (str == NULL)
		return (-1);
	ft_process_flags(tp, flags, 0);
	n = ft_write_string(tp, str);
	free (str);
	return (n);
}

int	ft_print_unsigned(t_flags *flags, va_list *param_ptr)
{
	unsigned long	p;
	char			*str;
	t_tp			*tp;
	int				n;

	tp = ft_init_to_print();
	p = (long int)(va_arg(*param_ptr, unsigned int));
	str = ft_d2string(p, "0123456789");
	if (str == NULL)
		return (-1);
	ft_process_flags(tp, flags, 0);
	n = ft_write_string(tp, str);
	free (str);
	return (n);
}

int	ft_print_hex(t_flags *flags, va_list *param_ptr, int low)
{
	unsigned int	p;
	char			*str;
	t_tp			*tp;
	int				n;

	tp = ft_init_to_print();
	p = (va_arg(*param_ptr, int));
	if (!low)
		str = ft_d2string(p, "0123456789ABCDEF");
	else
		str = ft_d2string(p, "0123456789abcdef");
	if (str == NULL)
		return (-1);
	ft_process_flags(tp, flags, 0);
	n = ft_write_string(tp, str);
	free (str);
	return (n);
}

int	ft_print_percentage(t_flags *flags)
{
	t_tp			*tp;

	tp = ft_init_to_print();
	ft_process_flags(tp, flags, 0);
	return (ft_write_char(tp, '%'));
}
