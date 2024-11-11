# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 16:02:58 by jemustaj          #+#    #+#              #
#    Updated: 2024/11/11 17:39:31 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
EXEC = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs
RM = rm -rf

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_strlcpy.c ft_strlcat.c
OBJS = $(SRC:.c=.o)

TEST_SRC = main.c
TEST_OBJS = $(TEST_SRC:.c=.o)

all: $(NAME)

exec: test
	./$(EXEC)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo ">>> $(NAME) archive created <<<"

test: $(NAME) $(OBJS) $(TEST_OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(TEST_OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) $(TEST_OBJS)

fclean: clean
	$(RM) $(EXEC)
	$(RM) $(NAME)

re: fclean all
