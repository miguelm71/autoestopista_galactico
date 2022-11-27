/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:20:13 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/11/27 20:01:02 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H

# include <unistd.h>
# include "../ft_printf.h"
# include "../flags/ft_flags.h"
# include "../printer/ft_printer.h"

void		ft_putnbr_base(t_list *node, long int nbr, char *base);
static char	*ft_cpychar(char c);
static void	ft_delchar(char *c);


#endif