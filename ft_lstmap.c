/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:28:44 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/30 15:56:37 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		*ft_freelst(t_list *lst)
{
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*res;
	t_list	*cur;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmp = f(lst);
	if (tmp == NULL)
		return (NULL);
	res = ft_lstnew(tmp->content, tmp->content_size);
	cur = res;
	while (lst->next != NULL && cur != NULL)
	{
		lst = lst->next;
		tmp = f(lst);
		if (tmp == NULL)
			return (ft_freelst(res));
		cur->next = ft_lstnew(tmp->content, tmp->content_size);
		cur = cur->next;
	}
	if (cur == NULL)
		return (ft_freelst(res));
	return (res);
}
