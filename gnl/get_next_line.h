/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:54:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/29 16:01:46 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10

# endif

# include <unistd.h>
# include <stdlib.h>

# include <string.h>

//get_next_line
char	*ft_increase_buf(char **s);
char	*get_next_line(int fd);

//get_next_line_utils
int		ft_have_n(char *b);
char	*ft_calloc(char c, int size);
int		ft_strlen(const char *str);
void	ft_strsplit_n(char **h, char **p);
char	*ft_copy_str(char *str, int i, int e);

#endif