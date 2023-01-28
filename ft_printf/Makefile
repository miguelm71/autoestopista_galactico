# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 18:58:24 by mmateo-m          #+#    #+#              #
#    Updated: 2023/01/28 19:27:15 by mmateo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		gcc
RM			=		rm -fr
CFLAGS		=		-Wall -Wextra -Werror

NAME		=		libftprintf.a
LIBFT_NAME	=		libft.a

HEADER = 			./ft_printf.h
LIBFT_HEADER =		./libft/libft.h

SRCS_LIBFT = 		./libft/ft_isalpha.c \
					./libft/ft_isdigit.c \
					./libft/ft_isalnum.c \
					./libft/ft_isascii.c \
					./libft/ft_isprint.c \
					./libft/ft_strlen.c \
					./libft/ft_memset.c \
					./libft/ft_bzero.c \
					./libft/ft_memcpy.c \
					./libft/ft_memmove.c \
					./libft/ft_strlcpy.c \
					./libft/ft_strlcat.c \
					./libft/ft_toupper.c \
					./libft/ft_tolower.c \
					./libft/ft_strchr.c \
					./libft/ft_strrchr.c \
					./libft/ft_strncmp.c \
					./libft/ft_memchr.c \
					./libft/ft_memcmp.c \
					./libft/ft_strnstr.c \
					./libft/ft_atoi.c \
					./libft/ft_calloc.c \
					./libft/ft_strdup.c \
					./libft/ft_substr.c \
					./libft/ft_strjoin.c \
					./libft/ft_strtrim.c \
					./libft/ft_split.c \
					./libft/ft_itoa.c \
					./libft/ft_strmapi.c \
					./libft/ft_striteri.c \
					./libft/ft_putchar_fd.c \
					./libft/ft_putstr_fd.c \
					./libft/ft_putendl_fd.c \
					./libft/ft_putnbr_fd.c \
					./libft/ft_lstnew.c \
					./libft/ft_lstadd_front.c \
					./libft/ft_lstsize.c \
					./libft/ft_lstlast.c \
					./libft/ft_lstadd_back.c \
					./libft/ft_lstdelone.c \
					./libft/ft_lstclear.c \
					./libft/ft_lstiter.c \
					./libft/ft_lstmap.c

SRCS = 				ft_printf.c \
					./src/flags/ft_flags1.c \
					./src/printer/ft_printer.c \
					./src/printer/ft_printer2.c \
					./src/tools/ft_charmng.c \
					./src/tools/ft_putnbr_base.c \
					./src/tools/ft_charmng.c \
					./src/tools/ft_lstget.c

SRCS_BONUS	= 		./src/printer/ft_printer4_bonus.c \
					./src/flags/ft_flags2_bonus.c \
					./src/flags/ft_flags3_bonus.c

SRCS_NOBONUS =		./src/printer/ft_printer3.c \
					./src/flags/ft_flags2.c

SRCS_DEBUG	=		./src/test.c

OBJS_LIBFT	=		$(SRCS_LIBFT:.c=.o)
OBJS		=		$(SRCS:.c=.o)
OBJS_BONUS	=		$(SRCS_BONUS:.c=.o)
OBJS_NO_BONUS = 	$(SRCS_NOBONUS:.c=.o)
OBJS_DEBUG	=		$(SRCS_DEBUG:.c=.o)


all:		$(NAME)

libft: 		$(OBJS_LIBFT) $(LIBFT_HEADER)
				$(AR) -rcs $(NAME) $(OBJS_LIBFT)

$(NAME): 	libft $(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS) $(HEADER) $(LIBFT_HEADER)
				$(AR) -rcs $(NAME) $(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				$(AR) -dv $(NAME) $(OBJS_BONUS)

kk:			libft $(OBJS) $(HEADER) $(LIBFT_HEADER) $(OBJS_BONUS)
				$(AR) -rv $(NAME) $$(OBJS_NO_BONUS)
				$(AR) -rcs $(NAME) $(OBJS) $(OBJS_BONUS)

bonus:		libft $(OBJS) $(OBJS_NO_BONUS) $(OBJS_BONUS)
				$(AR) -rcs $(NAME) $(OBJS) $(OBJS_BONUS) $(OBJS_NO_BONUS)
				$(AR) -dv $(NAME) $(OBJS_NO_BONUS)
				
clean:		
			$(RM) $(OBJS) $(OBJS_LIBFT) $(OBJS_BONUS) $(OBJS_NO_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

debug:		
			gcc -g -Wall -Wextra -Werror ./libft/*.c *.c ./src/flags/*.c ./src/printer/*.c ./src/tools/*.c -o test