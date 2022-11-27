/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:00:44 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/27 19:44:59 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTER_H
# define FT_PRINTER_H
# include "../ft_printf.h"
# include "../flags/ft_flags.h"
# include "../tools/ft_tools.h"

int			ft_print_param(t_flags flags, va_list param_ptr);
static int	ft_print_list(t_list *list);
static int	ft_print_char(t_flags *flags, va_list param_ptr);
static int	ft_print_string(t_list *attribute, va_list param_ptr);
static int	ft_print_pointer(t_list *attribute, va_list param_ptr);
static int	ft_print_decimal(t_flags *flags, va_list param_ptr);
static int	ft_print_integer(t_flags *flags, va_list param_ptr);
static int	ft_print_unsigned_decimal(t_flags *flags, va_list param_ptr);
static int	ft_print_hex(t_flags *flags, va_list param_ptr, int low);

#endif
