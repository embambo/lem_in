/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:14:59 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:15:00 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_calc_divisor(int n)
{
	long	tmp;
	int		divisor;

	tmp = n;
	divisor = 1;
	if (tmp < 0)
		tmp *= -1;
	tmp /= 10;
	while (tmp > 0)
	{
		divisor *= 10;
		tmp /= 10;
	}
	return (divisor);
}

void			ft_putnbr_fd(int n, int fd)
{
	int		ans;
	int		divisor;
	long	tmp;

	ans = 0;
	divisor = ft_calc_divisor(n);
	tmp = n;
	if (tmp < 0)
	{
		tmp *= -1;
		ft_putchar_fd(45, fd);
	}
	while (divisor > 0)
	{
		ans = tmp / divisor;
		ft_putchar_fd(ans + 48, fd);
		tmp = tmp - (ans * divisor);
		divisor /= 10;
	}
}
