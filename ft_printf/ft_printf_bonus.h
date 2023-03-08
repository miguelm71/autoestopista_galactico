/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:32:04 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/11 11:18:55 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "./ft_printf.h"

int		ft_set_zero_flag(t_flags *flags);
int		ft_set_dot_flag(t_flags *flags);
int		ft_set_plus_flag(t_flags *flags);
int		ft_set_space_flag(t_flags *flags);
int		ft_set_pad_flag(t_flags *flags);

int		ft_get_num(char **str);

void	ft_fix_string_length(t_list **list, int decimals);
void	ft_fix_signus_space(t_list **list, t_flags *flags);
void	ft_set_base_ind(t_list **list, char t);

void	ft_jfy_right(t_list **list, int num_chars, char c);
void	ft_jfy_left(t_list **list, int num_chars, char c);
void	ft_fix_percentage_length(t_list **list, t_flags *flags);
void	ft_fix_width(t_list **list, t_flags flags);
void	ft_fix_width2(char t, t_list **list, t_flags flags, char *minos);

void	ft_fix_decimal_length(t_list **list, t_flags *flags, int nbr);
void	ft_fix_zero_decimal_length(t_list **list);

#endif