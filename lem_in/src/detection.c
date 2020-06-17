/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:11:39 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:11:40 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		is_comment(char *str)
{
	if (str[0] && str[0] == '#' && str[1] != '#')
		return (1);
	return (0);
}

int		is_start(char *str)
{
	int		len;

	len = ft_strlen(str);
	if (len == 7 && str[0] == '#' && str[1] == '#')
		if (str[2] == 's' && str[3] == 't' && str[4] == 'a' &&
			str[5] == 'r' && str[6] == 't')
			return (1);
	return (0);
}

int		is_end(char *str)
{
	int		len;

	len = ft_strlen(str);
	if (len == 5 && str[0] == '#' && str[1] == '#')
		if (str[2] == 'e' && str[3] == 'n' && str[4] == 'd')
			return (1);
	return (0);
}

int		is_rand_command(char *str)
{
	if (is_start(str))
		return (0);
	if (is_end(str))
		return (0);
	if (str[0] && str[1] && str[0] == '#' && str[1] == '#')
		return (1);
	return (0);
}
