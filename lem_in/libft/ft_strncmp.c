/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:14:59 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:15:00 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	t_uchar	*s1_p;
	t_uchar	*s2_p;
	size_t	cntr;

	s1_p = (t_uchar *)s1;
	s2_p = (t_uchar *)s2;
	cntr = 0;
	while (s1_p[cntr] == s2_p[cntr] && s1_p[cntr] && s2_p[cntr] && cntr < n)
		++cntr;
	if (cntr == n)
		return (0);
	return ((int)(s1_p[cntr] - s2_p[cntr]));
}
