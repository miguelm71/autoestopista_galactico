# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 18:58:24 by mmateo-m          #+#    #+#              #
#    Updated: 2023/02/11 15:56:27 by mmateo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		gcc
RM			=		rm -fr
AR			= 		ar
CFLAGS		=		-Wall -Wextra -Werror

NAME		=		libftprintf.a
LIBFT		= 		libft


HEADER = 			./ft_printf.h

SRCS = 				ft_printf.c \
					ft_flags_utils.c \
					ft_flags1.c \
					ft_flags4.c \
					ft_printer1.c \
					ft_printer4.c \
					

SRCS_BONUS	= 		ft_flags_bonus1.c \

					
SRCS_NOBONUS =		

SRCS_DEBUG	=		./src/test.c


OBJS		=		$(SRCS:.c=.o)
OBJS_BONUS	=		$(SRCS_BONUS:.c=.o)
OBJS_NO_BONUS = 	$(SRCS_NOBONUS:.c=.o)
OBJS_DEBUG	=		$(SRCS_DEBUG:.c=.o)


all:		$(NAME)

$(NAME): 	$(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS) $(HEADER)
				make -C $(LIBFT)
				cp $(LIBFT)/libft.a .
				mv libft.a $(NAME)
				$(AR) rcs $(NAME) $(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				$(AR) -dv $(NAME) $(OBJS_BONUS)

kk:			$(OBJS) $(HEADER) $(OBJS_BONUS)
				$(AR) -rv $(NAME) $$(OBJS_NO_BONUS)
				$(AR) -rcs $(NAME) $(OBJS) $(OBJS_BONUS)

bonus:		$(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				@make -C $(LIBFT)
				@cp $(LIBFT)/libft.a .
				@mv libft.a $(NAME)
				$(AR) rcs $(NAME) $(OBJS) $(OBJS_BONUS) $(OBJS_NO_BONUS)
				-@$(AR) -dv $(NAME) $(OBJS_NO_BONUS)
				
clean:		
			@make clean -C $(LIBFT)
			@$(RM) $(OBJS) $(OBJS_LIBFT) $(OBJS_BONUS) $(OBJS_NO_BONUS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

debug:		
			gcc -g -Wall -Wextra -Werror ./libft/*.c ./test.c $(SRCS) $(SRCS_BONUS) -o test
