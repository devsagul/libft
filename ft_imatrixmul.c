/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imatrixmul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:08:26 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 18:09:04 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_imatrix			ft_imatrixmul(t_imatrix a, t_imatrix b)
{
	if (a.m != b.n)
		return (ft_imatrixidentity(0));
}
