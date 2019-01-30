/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixmul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:08:26 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 21:02:52 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double		ft_addrow(t_fmatrix a, t_fmatrix b,
								size_t i, size_t j)
{
	size_t	k;
	double	res;
	double	x;
	double	y;

	res = 0;
	k = 0;
	while (k < a.m)
	{
		ft_fmatrixget(a, i, k, &x);
		ft_fmatrixget(b, k, j, &y);
		res += x * y;
		k++;
	}
	return (res);
}

t_fmatrix			ft_fmatrixmul(t_fmatrix a, t_fmatrix b)
{
	t_fmatrix	res;
	size_t		i;
	size_t		j;

	if (a.m != b.n)
		return (ft_fmatrixidentity(0));
	res = ft_fmatrixtheta(a.n, b.m);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < a.n)
	{
		j = 0;
		while (j < b.m)
		{
			ft_fmatrixset(res, i, j, ft_addrow(a, b, i, j));
			j++;
		}
		i++;
	}
	return (res);
}
