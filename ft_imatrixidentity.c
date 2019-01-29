/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixidentity.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:49:28 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/29 20:58:24 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_imatrix			ft_imatrixidentity(size_t n)
{
	t_imatrix	res;
	size_t		size;
	size_t		i;

	size = n * n;
	res.n = 0;
	res.m = 0;
	if (size == 0 || size / n != n)
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
