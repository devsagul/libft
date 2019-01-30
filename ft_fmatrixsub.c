/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixsub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:30:03 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 20:30:28 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fmatrix			ft_fmatrixsub(t_fmatrix a, t_fmatrix b)
{
	t_fmatrix	res;
	size_t		i;
	size_t		j;
	double		value1;
	double		value2;

	if (a.n != b.n || a.m != b.m)
		return (ft_fmatrixidentity(0));
	res = ft_fmatrixtheta(a.n, a.m);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < a.n)
	{
		j = 0;
		while (j < a.m)
		{
			ft_fmatrixget(a, i, j, &value1);
			ft_fmatrixget(b, i, j, &value2);
			ft_fmatrixset(res, i, j, value1 - value2);
			j++;
		}
		i++;
	}
	return (res);
}
