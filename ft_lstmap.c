/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:28:44 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 19:44:54 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static void	ft_freelst(t_list *lst)
{
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*res;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	res = ft_lstnew(lst->content, lst->content_size);
	lst = lst->next;
	if (res == NULL)
		return (NULL);
	tmp = res;
	while (lst != NULL)
	{
		tmp->next = ft_lstnew(lst->content, lst->content_size);
		if (tmp->next == NULL)
		{
			ft_freelst(res);
			return (NULL);
		}
		lst = lst->next;
		tmp = tmp->next;
		tmp->next = NULL;
	}
	ft_lstiter(res, f);
	return (res);
}
