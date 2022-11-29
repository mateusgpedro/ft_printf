# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 11:50:49 by maguimar          #+#    #+#              #
#    Updated: 2022/11/28 11:57:07 by maguimar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = CC
CFLAGS = -Wall -Wextra -Werror

SRC =

OBJ = $(SRC:.c=.0)

all $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re: fclean all
