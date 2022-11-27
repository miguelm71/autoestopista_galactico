# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 18:58:24 by mmateo-m          #+#    #+#              #
#    Updated: 2022/11/27 20:08:45 by mmateo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./src/ft_printf.c ./src/printer/ft_printer.c ./src/printer/ft_printer2.c \
		./src/tools/ft_charmng.c ./src/tools/ft_putnbr_base.c

OBJS		=		$(SRCS:.c=.o)

SRCS_BONUS	= ./src/flags/ft_flats_f.c ./src/flags/ft_flags_s.c ./src/flags/ft_flags_t.c

OBJS_BONUS	=		$(SRCS_BONUS:.c=.o)

LIBFT		= 		libft

CC			=		gcc
RM			=		rm -fr
CFLAGS		=		-Wall -Wextra -Werror

NAME		=		ft_printf.a

all:		$(NAME) -l $(FT_LIB)

$(NAME):	$(OBJS)
				 ar -rcs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
				$(RM) $(NAME)

re: 		fclean $(NAME)

bonus:		$(OBJS) $(OBJS_BONUS)
				 ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)