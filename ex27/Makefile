# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 01:44:05 by cfusaro           #+#    #+#              #
#    Updated: 2017/11/08 05:25:27 by cfusaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all : $(NAME)

$(NAME) :
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean :
	/bin/rm -f ft_display_file.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
