# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 18:58:24 by mmateo-m          #+#    #+#              #
#    Updated: 2023/03/02 16:19:50 by mmateo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		gcc
RM			=		rm -fr
AR			= 		ar
CFLAGS		=		-Wall -Wextra -Werror

NAME		=		libftprintf.a
LIBFT		= 		libft

SRCS = 				ft_printf.c \
					ft_flags_utils.c \
					ft_flags1.c \
					ft_printer1.c \
					ft_printer2.c \
					ft_utils.c
					

SRCS_BONUS	= 		ft_flags1_bonus.c \
					ft_flags2_bonus.c \
					ft_printer1_bonus.c \
					ft_printer2_bonus.c

					
SRCS_NOBONUS =		ft_flags4.c \
					ft_printer4.c

SRCS_DEBUG	=		./src/test.c


OBJS		=		$(SRCS:.c=.o)
OBJS_BONUS	=		$(SRCS_BONUS:.c=.o)
OBJS_NO_BONUS = 	$(SRCS_NOBONUS:.c=.o)
OBJS_DEBUG	=		$(SRCS_DEBUG:.c=.o)


all:		$(NAME)

$(NAME): 	$(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				make -C $(LIBFT)
				cp $(LIBFT)/libft.a .
				mv libft.a $(NAME)
				$(AR) rcs $(NAME) $(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				$(AR) -dv $(NAME) $(OBJS_BONUS)

bonus:		$(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				make all
				$(AR) rcs $(NAME) $(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				$(AR) -dv $(NAME) $(OBJS_NO_BONUS)
				
clean:		
			make clean -C $(LIBFT)
			$(RM) $(OBJS) $(OBJS_LIBFT) $(OBJS_BONUS) $(OBJS_NO_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

debug:		
			gcc -g -Wall -Wextra -Werror ./libft/*.c ./test.c $(SRCS) $(SRCS_BONUS) -o test

debugnobonus:
			gcc -g -Wall -Wextra -Werror ./libft/*.c ./test.c $(SRCS_NOBONUS) $(SRCS)  -o test

