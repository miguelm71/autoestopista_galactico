/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:00:44 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/25 20:49:06 by mmateo-m         ###   ########.fr       */
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
int		ft_print_percentage(t_flags *flags);
void	ft_process_flags(t_list **list, t_flags *flags);

void	ft_jfy_right(t_list **list, int num_chars, char c);
void	ft_jfy_left(t_list **list, int num_chars, char c);
void	ft_fix_width(t_list **list, t_flags flags);
void	ft_fix_string_length(t_list **list, int decimals);
void	ft_fix_decimal_length(t_list **list, int decimals);
void	ft_set_base_ind(t_list **list, char t);
void	ft_fix_signus_space(t_list **list);
void	ft_fix_signus_plus(t_list **list);

#endif
