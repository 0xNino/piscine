# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 23:59:28 by ngenoud           #+#    #+#              #
#    Updated: 2021/09/18 23:59:30 by ngenoud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = check_dict.c ft_keys.c parsing.c rush02.c utils.c utils2.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
NAME = rush02



$(NAME):	$(OBJ)
			gcc $(CFLAGS) -o $(NAME) $(OBJ)

all:		$(NAME)
			@echo	Program $(NAME) has been successfuly compiled

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
