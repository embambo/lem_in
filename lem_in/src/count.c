/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:11:39 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:11:40 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		count_pluses(char *str)
{
	int		cntr;
	int		pluses;

	cntr = 0;
	pluses = 0;
	while (str[cntr])
	{
		if (str[cntr] == '+')
			++pluses;
		++cntr;
	}
	return (pluses);
}

int		count_dashes_c(char *str, char c)
{
	int		cntr;
	int		dashes;

	cntr = 0;
	dashes = 0;
	while (str[cntr] && str[cntr] != c)
	{
		if (str[cntr] == '-')
			++dashes;
		++cntr;
	}
	return (dashes);
}

int		count_dashes(char *str)
{
	int		cntr;
	int		dashes;

	cntr = 0;
	dashes = 0;
	while (str[cntr])
	{
		if (str[cntr] == '-')
			++dashes;
		++cntr;
	}
	return (dashes);
}

int		count_spaces(char *str)
{
	int		cntr;
	int		spaces;

	cntr = 0;
	spaces = 0;
	while (str[cntr])
	{
		if (str[cntr] == ' ')
			++spaces;
		++cntr;
	}
	return (spaces);
}

int		count_whitespaces(char *str)
{
	int		cntr;
	int		whitespaces;

	cntr = 0;
	whitespaces = 0;
	while (str[cntr])
	{
		if (str[cntr] >= 9 && str[cntr] <= 13)
			++whitespaces;
		++cntr;
	}
	return (whitespaces);
}
