/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixtheta.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:36:57 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/29 21:01:34 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_imatrix			ft_imatrixtheta(size_t n, size_t m)
{
	size_t		size;
	t_imatrix	res;

	size = n * m * sizeof(int);
	if (size == 0 || size / n != m * sizeof(int))
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
