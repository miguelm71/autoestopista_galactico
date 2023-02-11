/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:21:46 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/11 16:02:13 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(char const *str, ...);

typedef struct s_flags
{
	int		minus;
	int		plus;
	int		pad;
	int		space;
	int		dot;
	int		zero;
	int		width;
	int		decimals;
	char	data_type;
}t_flags;

typedef struct s_tp
{
	int		zero_l;
	int		space_l;
	int		spcae_r;
	int		sign;
	int		sign_space;
	int		cap_hex;
	int		low_hex;
}t_tp;

//ft_flags_utils
int		ft_is_flag(char c);
int		ft_is_type(char c);
t_flags	*ft_init_flags(void);
void	ft_end_flags(t_flags *flags);
int		ft_set_type_flag(char t, t_flags *flags);

//ft_flags1
int		ft_get_flags(char **str, va_list *param_ptr);

//ft_flags4 & ft_flags_bonus1
int		ft_parse_flags(char **str, t_flags *flags);

//ft_printer1
int		ft_print_param(t_flags *flags, va_list *param_ptr);
int		ft_print_char(t_flags *flags, va_list *param_ptr);
int		ft_write_char(t_tp *tp, char c);

//ft_printer4 & ft_printer_bonus1
void	ft_process_flags(t_tp *tp, t_flags *flags, int nbr);
#endif