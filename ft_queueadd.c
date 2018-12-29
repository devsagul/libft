/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queueadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 21:38:23 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/29 21:47:06 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_queueadd(t_queue *queue, t_list *new)
{
	ft_lstappend(&(queue->lst), new);
	queue->size += ft_lstsize(new);
}
