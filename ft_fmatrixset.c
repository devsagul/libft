/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:18:30 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 20:18:57 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fmatrixset(t_fmatrix matrix, size_t i, size_t j, double value)
{
	if (i >= matrix.n || j >= matrix.m)
		return (0);
	matrix.values[i * matrix.m + j] = value;
	return (1);
}
