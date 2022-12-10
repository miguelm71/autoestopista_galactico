/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:28:11 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/12/10 13:10:45 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLAGS_H
# define FT_FLAGS_H

# include <stdlib.h>
# include "../../include/libft.h"

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

int		ft_set_flag_number(int n, t_flags *flags);
int		ft_set_minus_flag(t_flags *flags);
int		ft_set_zero_flag(t_flags *flags);
int		ft_set_dot_flag(t_flags *flags);
int		ft_set_plus_flag(t_flags *flags);
int		ft_set_space_flag(t_flags *flags);
int		ft_set_pad_flag(t_flags *flags);
int		ft_set_type_flag(char t, t_flags *flags);
int		ft_is_type(char c);
int		ft_is_flag(char c);
int		ft_set_data_type_flag(char c, t_flags *flags);
int		ft_parse_flags(char *str, t_flags *flags);
t_flags	*ft_init_flags(void);
void	ft_end_flags(t_flags *flags);

#endif