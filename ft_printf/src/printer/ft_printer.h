/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:00:44 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/05 13:10:22 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTER_H
# define FT_PRINTER_H

# include <stdarg.h>
# include "../../libft/libft.h"
# include "../flags/ft_flags.h"
# include "../tools/ft_tools.h"

int		ft_print_param(t_flags *flags, va_list *param_ptr);
int		ft_print_list(t_list *list);
int		ft_print_char(t_flags *flags, va_list *param_ptr);
int		ft_print_string(t_flags *flags, va_list *param_ptr);
int		ft_print_pointer(t_flags *flags, va_list *param_ptr);
int		ft_print_decimal(t_flags *flags, va_list *param_ptr);
int		ft_print_integer(t_flags *flags, va_list *param_ptr);
int		ft_print_unsigned_decimal(t_flags *flags, va_list *param_ptr);
int		ft_print_hex(t_flags *flags, va_list *param_ptr, int low);
void	ft_process_flags(t_list *list, t_flags *flags);

#endif
