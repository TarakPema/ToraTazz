# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfortuin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 14:19:34 by kfortuin          #+#    #+#              #
#    Updated: 2020/01/23 14:44:46 by kfortuin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = main.c ft_funk.c eval_expr.c
OBJ = main.o ft_funk.o eval_expr.o

all = $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) 
	gcc $(OBJ) -o $(NAME) 

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all 

