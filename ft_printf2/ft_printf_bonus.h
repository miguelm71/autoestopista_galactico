/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:20:58 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/21 14:33:04 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "./ft_printf.h"

// ft_flags1_bonus
int		ft_get_num(char **str);
int		ft_set_flag_number(int n, t_flags *flags);
int		ft_set_minus_flag(t_flags *flags);

// ft_flags2_bonus
int		ft_set_plus_flag(t_flags *flags);
int		ft_set_zero_flag(t_flags *flags);
int		ft_set_dot_flag(t_flags *flags);
int		ft_set_space_flag(t_flags *flags);
int		ft_set_pad_flag(t_flags *flags);

// ft_printer2_bonus
void	ft_calculate_width(t_tp *tp, t_flags *flags, char *str);

#endif