/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixget.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:59:33 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:03:55 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_imatrixget(t_imatrix matrix, size_t i, size_t j, int *value)
{
	if (i >= matrix.n || j >= matrix.m)
		return (0);
	*value = matrix.values[i * matrix.m + j];
	return (1);
}
