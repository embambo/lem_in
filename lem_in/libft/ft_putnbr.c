/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
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

void			ft_putnbr(int n)
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
		ft_putchar(45);
	}
	while (divisor > 0)
	{
		ans = tmp / divisor;
		ft_putchar(ans + 48);
		tmp = tmp - (ans * divisor);
		divisor /= 10;
	}
}
