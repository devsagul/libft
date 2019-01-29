/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:51:02 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/29 17:53:50 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dllist			*ft_dllstnew(void const *content, size_t content_size)
{
	t_dllist	*res;

	res = (t_dllist *)malloc(sizeof(t_dllist));
	if (res == NULL)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		res->content = NULL;
		res->content_size = 0;
	}
	else
	{
		res->content = (void *)malloc(content_size);
		if (res->content == NULL)
		{
			free(res);
			return (NULL);
		}
		res->content = ft_memcpy(res->content, content, content_size);
		res->content_size = content_size;
	}
	res->next = NULL;
    res->prev = NULL;
	return (res);
}