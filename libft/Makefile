# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 17:19:31 by mmateo-m          #+#    #+#              #
#    Updated: 2022/10/09 12:43:07 by mmateo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS		=		$(SRCS:.c=.o)

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJS_BONUS	=		$(SRCS_BONUS:.c=.o)

CC			=		gcc
RM			=		rm -fr
CFLAGS		=		-Wall -Wextra -Werror

NAME		=		libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
				 ar -rcs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
				$(RM) $(NAME)

re: 		fclean $(NAME)

bonus:		$(OBJS) $(OBJS_BONUS)
				 ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)