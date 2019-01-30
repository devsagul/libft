/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixadd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:32:29 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:38:19 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_imatrix			ft_imatrixadd(t_imatrix a, t_imatrix b)
{
	t_imatrix	res;
	size_t		i;
	size_t		j;
	int			value1;
	int			value2;

	if (a.n != b.n || a.m != b.m)
		return (ft_imatrixidentity(0));
	res = ft_imatrixtheta(a.n, a.m);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < a.n)
	{
		j = 0;
		while (j < a.m)
		{
			ft_imatrixget(a, i, j, &value1);
			ft_imatrixget(b, i, j, &value2);
			ft_imatrixset(res, i, j, value1 + value2);
			j++;
		}
		i++;
	}
	return (res);
}
