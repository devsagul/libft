/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixtranspose.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:36:17 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 21:06:33 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fmatrix			ft_fmatrixtranspose(t_fmatrix a)
{
	t_fmatrix	res;
	size_t		i;
	size_t		j;
	double		tmp;

	res = ft_fmatrixtheta(a.m, a.n);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < a.n)
	{
		j = 0;
		while (j < a.m)
		{
			ft_fmatrixget(a, i, j, &tmp);
			ft_fmatrixset(res, j, i, tmp);
			j++;
		}
		i++;
	}
	return (res);
}
