/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:53:55 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/24 17:53:57 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_HEADER
#define DICT_HEADER

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct number_d number_d;
struct number_d
{
	number_d *prev;
	char *n;
	char *v;
	number_d *next;
};


number_d *ft_create_table(int num);

void ft_add_node(number_d **lista, number_d *node, int index);

char *ft_get_value(number_d *lista, int size, char *name);
int ft_get_file_lines(char *file_name);
number_d *ft_dict_create_entry(char *str);
int ft_read_file(char *file_name, number_d *list, int *file);
int load_dict (char *file_name, number_d **dict, int size);
int ft_get_len(char *c);

#endif
