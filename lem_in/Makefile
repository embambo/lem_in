# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 17:34:59 by rdomingo          #+#    #+#              #
#    Updated: 2019/10/18 17:35:17 by rdomingo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;32m

RED = \033[0;31m

WHITE = \033[0;37m

NAME = build

all: $(NAME)

$(NAME):
	@$(MAKE) -C ./src/
	@printf "[${GREEN}BUILT LEM_IN${WHITE}]\n"

clean:
	@$(MAKE) clean -C ./src/
	@$(MAKE) clean -C ./libft/
	@printf "[${RED}CLEANED${WHITE}]\n"

fclean:
	@$(MAKE) fclean -C ./src/
	@$(MAKE) fclean -C ./libft/
	@printf "[${RED}FORCE CLEANED${WHITE}]\n"

norm:
	@printf "[${RED}NORMING PROJECT${WHITE}]\n"
	norminette -R CheckForbiddenSourceHeader ./src/*.c
	norminette -R CheckForbiddenSourceHeader ./inc/lem_in/*.h
	@printf "[${RED}NORMING LIBRARY${WHITE}]\n"
	norminette -R CheckForbiddenSourceHeader ./libft/ft_a*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_b*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_c*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_d*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_i*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_l*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_m*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_p*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_s*.c
	norminette -R CheckForbiddenSourceHeader ./libft/ft_t*.c
	norminette -R CheckForbiddenSourceHeader ./libft/get_next_line.c
	norminette -R CheckForbiddenSourceHeader ./libft/*.h

push_swap:
	@$(MAKE) -C ./src/
	@printf "[${GREEN}BUILT LEM_IN${WHITE}]\n"

re: fclean all

.PHONY: all clean fclean norm checker push_swap re