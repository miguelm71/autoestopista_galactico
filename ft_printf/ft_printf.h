/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:21:46 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/02/04 19:57:13 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(char const *str, ...);

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
int		ft_parse_flags(char **str, t_flags *flags);
int		ft_get_flags(char **str, va_list *param_ptr);
t_flags	*ft_init_flags(void);
void	ft_end_flags(t_flags *flags);

int		ft_print_param(t_flags *flags, va_list *param_ptr);
int		ft_print_list(t_list *list);
int		ft_print_char(t_flags *flags, va_list *param_ptr);
int		ft_print_string(t_flags *flags, va_list *param_ptr);
int		ft_print_pointer(t_flags *flags, va_list *param_ptr);
int		ft_print_decimal(t_flags *flags, va_list *param_ptr);
int		ft_print_integer(t_flags *flags, va_list *param_ptr);
int		ft_print_unsigned_decimal(t_flags *flags, va_list *param_ptr);
int		ft_print_hex(t_flags *flags, va_list *param_ptr, int low);
int		ft_print_percentage(t_flags *flags);
void	ft_process_flags(t_list **list, t_flags *flags, int nbr);

void	ft_jfy_right(t_list **list, int num_chars, char c);
void	ft_jfy_left(t_list **list, int num_chars, char c);
void	ft_fix_width(t_list **list, t_flags flags);
void	ft_fix_width2(char t, t_list **list, t_flags flags, char *minos);
void	ft_fix_string_length(t_list **list, int decimals);
void	ft_fix_decimal_length(t_list **list, t_flags *flags, int nbr);
void	ft_set_base_ind(t_list **list, char t);
void	ft_fix_signus_space(t_list **list, t_flags *flags);
int		ft_is_special(char *str);
void	ft_fix_percentage_length(t_list **list, t_flags *flags);

void	ft_putnbr_base(t_list *head, long int nbr, char *base);
char	*ft_cpychar(char c);
int		ft_num_t(char t);
void	ft_delchar(void *c);
void	ft_put_pointer(t_list *head, unsigned long nbr);
t_list	*ft_lstget(t_list *node, int n);
int		ft_add_char_node(t_list **head, char c);

#endif