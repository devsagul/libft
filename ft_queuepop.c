/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queuepop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 21:40:19 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/29 21:42:35 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_queuepop(t_queue *queue)
{
	t_list	*res;

	res = queue->lst;
	if (res == NULL)
		return (NULL);
	queue->lst = queue->lst->next;
	queue->size--;
	res->next = NULL;
	return (res);
}
