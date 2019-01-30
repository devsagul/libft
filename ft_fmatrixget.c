/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixget.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:10:29 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 20:12:13 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fmatrixget(t_fmatrix matrix, size_t i, size_t j, double *value)
{
	if (i >= matrix.n || j >= matrix.m)
		return (0);
	*value = matrix.values[i * matrix.m + j];
	return (1);
}
