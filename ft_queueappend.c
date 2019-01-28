/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queueappend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:55:50 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/28 23:04:56 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void				ft_queueappend(t_queue *queue, t_list *item)
{
    if (queue == NULL || item == NULL)
        return ;
    if (queue->size == 0)
    {
        queue->head = item;
        queue->tail = item;
    }
    queue->size += ft_lstlength(item);
    printf("%p\n", item->next);
    printf("%p\n", queue->tail);
    printf("%p\n", queue->tail->next);
    queue->tail->next = item;
    while (queue->tail->next != NULL)
    {
        printf("%p\n", queue->tail);
        queue->tail = queue->tail->next;
    }
}