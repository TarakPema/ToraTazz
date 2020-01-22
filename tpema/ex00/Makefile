# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpema <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 13:20:04 by tpema             #+#    #+#              #
#    Updated: 2020/01/20 16:00:55 by tpema            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c
OUT = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_cmp.o
INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(NAME) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
