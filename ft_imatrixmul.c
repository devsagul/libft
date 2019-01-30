/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixmul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:08:26 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 18:16:55 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_addrow(t_imatrix a, t_imatrix b,
								size_t i, size_t j)
{
	size_t	k;
	int		res;
	int		x;
	int		y;

	res = 0;
	k = 0;
	while (k < a.m)
	{
		ft_imatrixget(a, i, k, &x);
		ft_imatrixget(b, k, j, &y);
		res += x * y;
	}
	return (res);
}

t_imatrix			ft_imatrixmul(t_imatrix a, t_imatrix b)
{
	t_imatrix	res;
	size_t		i;
	size_t		j;

	if (a.m != b.n)
		return (ft_imatrixidentity(0));
	res = ft_imatrixtheta(a.n, b.m);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < a.n)
	{
		j = 0;
		while (j < b.m)
		{
			ft_imatrixset(res, i, j, ft_addrow(a, b, i, j));
			j++;
		}
		i++;
	}
	return (res);
}
