/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:06:47 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:59:44 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_stackfree(t_stack *stack, void (*del) (void *, size_t))
{
	t_list	*tmp;

	if (stack == NULL || del == NULL)
		return ;
	while (stack->size != 0)
	{
		tmp = ft_stackpop(stack);
		del(tmp->content, tmp->content_size);
		free(tmp);
	}
}
