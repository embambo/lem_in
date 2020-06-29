/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_mat_rows.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo  <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:14:59 by embambo           #+#    #+#             */
/*   Updated: 2020/06/29 10:45:59 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_alloc_mat_rows(size_t rows)
{
	char		**arr;

	if (!rows)
		return (NULL);
	if ((arr = malloc(sizeof(char *) * rows + 1)) == NULL)
		return (NULL);
	arr[rows] = NULL;
	return (arr);
}
