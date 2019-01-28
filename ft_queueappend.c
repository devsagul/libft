/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queueappend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:55:50 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/28 22:12:59 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_queueappend(t_queue *queue, t_list *item)
{
    t_list  *tmp;

    queue->size += ft_lstlength(item);
    queue->tail = item;
    while (queue->tail->next != NULL)
        queue->tail = queue->tail->next;
}