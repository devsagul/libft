/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:42:27 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 18:44:03 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_imatrixfree(t_imatrix *matrix)
{
	if (matrix->values == NULL || matrix->n == 0 || matrix->m == 0)
		return ;
	free(matrix->values);
	matrix->n = 0;
	matrix->m = 0;
}
