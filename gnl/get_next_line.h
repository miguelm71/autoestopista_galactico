/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:54:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/25 20:13:27 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>

# include <string.h>

//get_next_line
char	*get_next_line(int fd);

//get_next_line_utils
int		ft_have_n(char *b);
char	*ft_calloc(char c, int size);
size_t	ft_strlen(const char *str);
char	*ft_strdup_n(char **s, char **h);
char	*ft_increase_buf(char **s, int blk);

#endif