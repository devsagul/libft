/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delqueue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 21:42:54 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/29 21:44:59 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delqueue(t_queue *queue, void (*del) (void *, size_t))
{
	ft_lstdel(queue->lst, del);
	queue->lst = NULL;
	queue->size = 0;
}
