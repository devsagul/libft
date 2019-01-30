/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:02:55 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 17:56:28 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_lstlength(t_list *lst)
{
	size_t	res;

	if (lst == NULL)
		return (0);
	res = 1;
	while (lst->next != NULL)
	{
		res++;
		lst = lst->next;
	}
	return (res);
}
