/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queuecreate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:41:59 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:56:56 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_queue				ft_queuecreate(void)
{
	t_queue	res;

	res.size = 0;
	res.head = NULL;
	res.tail = NULL;
	return (res);
}
