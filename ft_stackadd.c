/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:47:59 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:58:27 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_stackadd(t_stack *stack, t_list *item)
{
	if (stack == NULL || item == NULL)
		return ;
	stack->size++;
	item->next = stack->head;
	stack->head = item;
}
