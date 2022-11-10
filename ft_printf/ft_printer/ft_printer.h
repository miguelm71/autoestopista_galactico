/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:00:44 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/10 20:02:41 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTER_H
# define FT_PRINTER_H
# include "../ft_printf.h"
# include "../ft_flags/ft_flags.h"

int	ft_print_param(t_flags flags, va_list param_ptr);

#endif
