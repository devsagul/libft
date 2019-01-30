/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmatrixfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 21:14:11 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 21:14:18 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_fmatrixfree(t_fmatrix *matrix)
{
	if (matrix->values == NULL || matrix->n == 0 || matrix->m == 0)
		return ;
	free(matrix->values);
	matrix->values = NULL;
	matrix->n = 0;
	matrix->m = 0;
}
