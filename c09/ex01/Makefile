# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 23:33:58 by 0xNino            #+#    #+#              #
#    Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS = $(addprefix $(PRE), $(SRC))

OBJS = $(SRCS:.c=.o)

PRE = ./srcs/

HEAD = ./includes/

NAME = libft.a

AR = ar rc

RM = rm -f

LIB = ranlib

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(LIB) $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
