/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixidentity.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:59:44 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 20:00:17 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_fmatrix			ft_fmatrixidentity(size_t n)
{
	t_fmatrix	res;
	size_t		size;
	size_t		i;

	size = n * n * sizeof(double);
	res.n = 0;
	res.m = 0;
	if (size == 0 || size / n != n * sizeof(double))
	{
		res.values = NULL;
		return (res);
	}
	res.values = ft_memalloc(size);
	if (res.values == NULL)
		return (res);
	res.n = n;
	res.m = n;
	i = 0;
	while (i < n)
	{
		res.values[i * n + i] = 1;
		i++;
	}
	return (res);
}
