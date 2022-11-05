/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:28:11 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/05 14:56:48 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLAGS_H
# define FT_FLAGS_H

# include "../ft_printf.h"

static t_flags	*ft_init_flags(void);
static int		ft_put_flag_number(int n, t_flags *flags);
static int		ft_set_minus_flag(t_flags *flags);
static int		ft_set_zero_flag(t_flags *flags);
static int		ft_set_dot_flag(t_flags *flags);
static int		ft_set_plus_flag(t_flags *flags);
static int		ft_set_space_flag(t_flags *flags);
static int		ft_set_pad_flag(t_flags *flags);
static int 		ft_set_type_flat(t_flags *flags);

#endif