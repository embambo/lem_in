/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:11:39 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:11:40 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

void		print_error_line(t_data *d, int error)
{
	int			cntr;
	t_input		*tmp;

	if (error <= 0 || error == 8)
		return ;
	cntr = 0;
	tmp = d->input;
	while (tmp)
	{
		++cntr;
		tmp = tmp->next;
	}
	if (error == 3)
		++cntr;
	ft_putstr_fd("\033[0;33mLINE - ", 2);
	ft_putnbr(cntr);
	ft_putstr_fd("\033[0m\n", 2);
}

void		print_error_type(int error)
{
	if (error == 1)
		ft_putstr_fd("\033[0;33mERROR - ANTS - INCORRECT\033[0m\n", 2);
	if (error == 2)
		ft_putstr_fd("\033[0;33mERROR - ROOM - DUPLICATE ROOM\033[0m\n", 2);
	if (error == 3)
		ft_putstr_fd("\033[0;33mERROR - ROOM - EMPTY LINE\033[0m\n", 2);
	if (error == 4)
		ft_putstr_fd("\033[0;33mERROR - ROOM - UNKNOWN LINE\033[0m\n", 2);
	if (error == 5)
		ft_putstr_fd("\033[0;33mERROR - ROOM - MISSING START/END OR "
		"NO ROOMS\033[0m\n", 2);
	if (error == 6)
		ft_putstr_fd("\033[0;33mERROR - LINK - ROOM(S) DOESN'T "
		"EXIST\033[0m\n", 2);
	if (error == 7)
		ft_putstr_fd("\033[0;33mERROR - LINK - UNKNOWN LINE\033[0m\n", 2);
	if (error == 8)
		ft_putstr_fd("\033[0;33mERROR - NO PATH\033[0m\n", 2);
}

void		quit(t_data *d, int error)
{
	print_error_type(error);
	print_error_line(d, error);
	input_free_list(d->input);
	free_adj_mat(d);
	ft_memdel((void **)(&(d->stack)));
	print_free_list(d->print);
	room_free_list(d->room);
	if (error)
		exit(1);
	exit(0);
}

int			main(int ac, char **av)
{
	static t_data	d;

	get_input(&d);
	options(ac, av, &d);
	solve_graph(&d);
	options(ac, av, &d);
	if (!(ac == 2 && (ft_strcmp(av[1], "-v") == 0)))
		ft_putchar('\n');
	ft_putchar('\n');
	input_print_list(d.input);
	send_ants(&d);
	quit(&d, 0);
}
