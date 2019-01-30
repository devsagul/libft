/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrix2imatrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:26:12 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 23:29:33 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_imatrix			ft_fmatrix2imatrix(t_fmatrix matrix)
{
	t_imatrix	res;
	size_t		i;
	size_t		j;
	double		value;

	if (matrix.values == NULL)
		return (ft_imatrixidentity(0));
	res = ft_imatrixtheta(matrix.n, matrix.m);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < matrix.n)
	{
		j = 0;
		while (j < matrix.m)
		{
			ft_fmatrixget(matrix, i, j, &value);
			ft_imatrixset(res, i, j, ft_iround(value));
			j++;
		}
		i++;
	}
	return (res);
}
