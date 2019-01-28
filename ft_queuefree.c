/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queuefree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 23:27:13 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/28 23:32:30 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_queuefree(t_queue *queue, void (*del) (void *, size_t))
{
    t_list  *tmp;

    if (queue == NULL || del == NULL)
        return ;
    while (queue.size != 0)
    {
        tmp = ft_queuepop(&queue);
        del(tmp->content, tmp->size);
        free(tmp);
    }
}