/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixtranspose.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:36:17 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 18:38:10 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_imatrix			ft_imatrixtranspose(t_imatrix a)
{
	t_imatrix	res;
	size_t		i;
	size_t		j;
	int			tmp;

	res = ft_imatrixtheta(a.m, a.n);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < a.n)
	{
		j = 0;
		while (j < a.m)
		{
			ft_imatrixget(a, i, j, &tmp);
			ft_imatrixset(res, j, i, tmp);
			j++;
		}
		i++;
	}
	return (res);
}
