# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 18:58:24 by mmateo-m          #+#    #+#              #
#    Updated: 2022/11/29 20:59:25 by mmateo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./src/ft_printf.c ./src/printer/ft_printer.c ./src/printer/ft_printer2.c \
		./src/tools/ft_charmng.c ./src/tools/ft_putnbr_base.c

OBJS		=		$(SRCS:.c=.o)

SRCS_BONUS	= ./src/flags/ft_flats_f.c ./src/flags/ft_flags_s.c ./src/flags/ft_flags_t.c

OBJS_BONUS	=		$(SRCS_BONUS:.c=.o)

LIBFT		= 		libftprintf.a

CC			=		gcc
RM			=		rm -fr
CFLAGS		=		-Wall -Wextra -Werror

NAME		=		ft_printf.a

all:		$(NAME) 

$(NAME):	$(OBJS)
			make -C libft
			cp libft/libft.a ./$(NAME)
			ar -rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:		
			make clean -C libft
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		make fclean -C libft
			clean
				$(RM) $(NAME)

re: 		fclean $(NAME)

bonus:		$(OBJS) $(OBJS_BONUS)
				$(CFLAGS) =+ -DBONUS=1
				ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
				ranlib $(NAME)