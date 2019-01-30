/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queuepop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:33:29 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:58:04 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_queuepop(t_queue *queue)
{
	t_list	*res;

	if (queue == NULL)
		return (NULL);
	if (queue->size == 0)
		return (NULL);
	res = queue->head;
	queue->head = res->next;
	res->next = NULL;
	queue->size--;
	if (queue->size == 0)
	{
		queue->tail = NULL;
	}
	return (res);
}
