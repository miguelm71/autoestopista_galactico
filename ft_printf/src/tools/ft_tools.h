/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:20:13 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/01/13 07:05:11 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H

# include <unistd.h>
# include "../../libft/libft.h"
# include "../flags/ft_flags.h"
# include "../printer/ft_printer.h"

static const char	g_base[] = "0123456789abcdef";

void	ft_putnbr_base(t_list *head, long int nbr, char *base);
char	*ft_cpychar(char c);
void	ft_delchar(void *c);
void	ft_put_pointer(t_list *head, unsigned long nbr);


#endif