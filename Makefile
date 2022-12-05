# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 11:50:49 by maguimar          #+#    #+#              #
#    Updated: 2022/12/05 14:19:57 by maguimar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = src/ft_printf.c src/ft_printfc.c src/ft_printfd.c src/ft_printfs.c \
	src/ft_printfu.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re: fclean all
