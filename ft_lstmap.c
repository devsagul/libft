/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:28:44 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/29 23:12:38 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		ft_freelst(t_list *lst)
{
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*res;
	t_list	*cur;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	if (tmp == NULL)
		return (NULL);
	res = tmp;
	cur = res;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = f(lst);
		if (tmp == NULL)
		{
			ft_freelst(res);
			return (NULL);
		}
		cur->next = ft_lstnew(tmp->content, tmp->content_size);
		cur = cur->next;
		lst = lst->next;
	}
	return (res);
}
