/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:54:52 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/17 21:13:02 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

# include <string.h>

//get_next_line
char	*get_next_line(int fd);

//get_next_line_utils
char	*ft_calloc(char c, int size);
size_t	ft_strlen(const char *str);
char	*ft_strdup(char **s);
char	*ft_increase_buf(char *s);

#endif