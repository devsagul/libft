/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixtheta.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:06:54 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 19:07:46 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_fmatrix			ft_fmatrixtheta(size_t n, size_t m)
{
	size_t		size;
	t_fmatrix	res;

	size = n * m * sizeof(double);
	if (size == 0 || size / n != m * sizeof(double))
	{
		res.n = 0;
		res.m = 0;
		res.values = NULL;
		return (res);
	}
	res.values = ft_memalloc(size);
	if (res.values == NULL)
	{
		res.n = 0;
		res.m = 0;
		return (res);
	}
	res.n = n;
	res.m = m;
	return (res);
}
