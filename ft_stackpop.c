/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:00:31 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/29 17:04:59 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_stackpop(t_stack *stack)
{
    t_list  *res;

    if (stack->size == 0)
        return (NULL);
    stack->size--;
    res = stack->head;
    stack->head = stack->head->next;
    res->next = NULL;
    return (res);
}