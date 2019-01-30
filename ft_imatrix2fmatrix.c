/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrix2fmatrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:31:34 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 23:32:19 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fmatrix			ft_imatrix2fmatrix(t_imatrix matrix)
{
	t_fmatrix	res;
	size_t		i;
	size_t		j;
	int			value;

	if (matrix.values == NULL)
		return (ft_fmatrixidentity(0));
	res = ft_fmatrixtheta(matrix.n, matrix.m);
	if (res.values == NULL)
		return (res);
	i = 0;
	while (i < matrix.n)
	{
		j = 0;
		while (j < matrix.m)
		{
			ft_imatrixget(matrix, i, j, &value);
			ft_fmatrixset(res, i, j, value);
			j++;
		}
		i++;
	}
	return (res);
}

