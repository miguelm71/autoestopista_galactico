/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:52:35 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/19 11:01:14 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

t_tp	*ft_init_to_print(void)
{
	t_tp	*tp;

	tp = (t_tp *)malloc (sizeof (t_tp));
	if (tp == NULL)
		return (NULL);
	tp->zero_l = 0;
	tp->space_l = 0;
	tp->spcae_r = 0;
	tp->sign = 0;
	tp->sign_space = 0;
	tp->cap_hex = 0;
	tp->low_hex = 0;
	return (tp);
}

int	ft_print_param(t_flags *flags, va_list *param_ptr)
{
	int		r;

	r = -1;
	if (flags->data_type == 'c')
		r = ft_print_char(flags, param_ptr);
	else if (flags->data_type == 's')
		r = ft_print_string(flags, param_ptr);
	else if (flags->data_type == 'p')
		r = ft_print_pointer(flags, param_ptr);
	else if (flags->data_type == 'd')
		r = ft_print_decimal(flags, param_ptr);
	else if (flags->data_type == 'i')
		r = ft_print_decimal(flags, param_ptr);
	else if (flags->data_type == 'u')
		r = ft_print_unsigned(flags, param_ptr);
	else if (flags->data_type == 'x')
		r = ft_print_hex(flags, param_ptr, 1);
	else if (flags->data_type == 'X')
		r = ft_print_hex(flags, param_ptr, 0);
	else if (flags->data_type == '%')
		r = ft_print_percentage(flags);
	return (r);
}

int	ft_print_char(t_flags *flags, va_list *param_ptr)
{
	int		c;
	t_tp	*tp;

	tp = ft_init_to_print();
	if (tp != NULL)
	{
		c = va_arg(*param_ptr, int);
		ft_process_flags(tp, flags, 1);
		return (ft_write_char(tp, c));
	}
	return (0);
}

int	ft_print_string(t_flags *flags, va_list *param_ptr)
{
	char	*str;
	t_tp	*tp;

	tp = ft_init_to_print();
	str = va_arg(*param_ptr, char *);
	if (str == NULL)
		str = "(null)";
	ft_process_flags(tp, flags, 0);
	return (ft_write_string(tp, str));
}

int	ft_print_pointer(t_flags *flags, va_list *param_ptr)
{
	unsigned long	p;
	char			*str;
	t_tp			*tp;
	int				n;

	tp = ft_init_to_print();
	p = (long long int)(va_arg(*param_ptr, void *));
	str = ft_p2string(p);
	if (str == NULL)
		return (-1);
	ft_process_flags(tp, flags, 0);
	n = ft_write_string(tp, str);
	free (str);
	return (n);
}
