/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:20:13 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/19 13:34:33 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H

# include "../ft_printf.h"

void		ft_putnbr_base(t_list *node, long int nbr, char *base);
static char	*ft_cpychar(char c);
static void	ft_delchar(char *c);


#endif