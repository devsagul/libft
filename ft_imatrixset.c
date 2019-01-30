/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:08:52 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:14:21 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_imatrixset(t_imatrix matrix, size_t i, size_t j, int value)
{
	if (i >= matrix.n || j >= matrix.m)
		return (0);
	matrix.values[j * m + i] = value;
	return (1);
}
