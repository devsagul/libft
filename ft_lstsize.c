/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 21:31:40 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/29 21:32:34 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_lstsize(t_list *lst)
{
	size_t	res;

	res = 0;
	while (lst != NULL)
	{
		res++;
		lst = lst->next;
	}
	return (res);
}
