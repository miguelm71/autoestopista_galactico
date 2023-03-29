# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 10:36:00 by mmateo-m          #+#    #+#              #
#    Updated: 2023/03/28 18:08:31 by mmateo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
RM			= rm -rf
AR			= AR
CFLAGS		= -Wall -Wextra -Werror -fsanitize=address

NAME		= get_next_line.a

SRCS		= get_next_line.c \
			  get_next_line_utils.c \

HEADERS		= get_next_line.h

OBJS		= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS) $(HEADERS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

debug:		
			gcc -g -Wall -Wextra -Werror -fsanitize=address ./test.c $(SRCS) -o test
			