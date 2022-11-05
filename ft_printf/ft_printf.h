/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:21:46 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/02 19:14:26 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF

# include "libft.h"

typedef struct s_flags
{
	int	minus;
	int	plus;
	int	slash;
	int	space;
	int	dot;
	int	zero;
	int	width;
	char data_type;
}t_flags;


int	ft_printf(char const *, ...);


#endif