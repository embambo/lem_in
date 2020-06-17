# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 16:10:21 by rdomingo          #+#    #+#              #
#    Updated: 2019/11/09 16:10:24 by rdomingo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[0;31m

WHITE = \033[0;37m

NAME = lem_in

FLAGS = -Wall -Wextra -Werror

FILES = adj_mat\
		backtrack\
		count\
		detection\
		detection2\
		input\
		input2\
		link\
		list_input\
		list_print\
		list_room\
		main\
		options\
		output\
		output2\
		stack\

CFILES = $(FILES:%=./%.c)

OFILES = $(FILES:%=./%.o)

all: $(NAME)

$(NAME): $(OFILES)
	@$(MAKE) -C ../libft/
	@gcc -o ../$(NAME) $(OFILES) ../libft/libft.a

$(OFILES): $(CFILES)
	@gcc -c $(FLAGS) $(CFILES) -I ../inc/lem_in/

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f ../$(NAME)

re: fclean all

.PHONY: all clean fclean re