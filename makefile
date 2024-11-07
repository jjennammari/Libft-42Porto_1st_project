# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 16:02:58 by jemustaj          #+#    #+#              #
#    Updated: 2024/11/07 20:46:53 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
EXEC = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs
RM = rm -rf

SRC = ft_isalpha.c ft_isdigit.c ft_alnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c
OBJS = $(SRCF:.c=.o)

all: $(NAME)

$(NAME): $(OBJC)
	$(AR) $(NAME) $(OBJC)
