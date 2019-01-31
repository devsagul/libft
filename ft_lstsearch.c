/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 17:25:22 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/31 17:29:44 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstsearch(t_list *lst, t_list *ref,
									int (*cmp) (t_list *item, t_list *ref))
{
	t_list	*res;

	if (cmp == NULL || ref == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if (cmp(lst, ref) == 0)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
