/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:14:59 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:15:00 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		cntr;
	t_uchar		ch;
	t_uchar		*ptr;

	cntr = 0;
	ch = (t_uchar)c;
	ptr = (t_uchar *)s;
	while (cntr < n)
	{
		if (ptr[cntr] == ch)
			return (ptr + cntr);
		++cntr;
	}
	return (NULL);
}
