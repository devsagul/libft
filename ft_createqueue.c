/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createqueue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 21:20:51 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/29 21:34:24 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_queue				ft_createqueue(t_list *lst)
{
	t_queue	res;

	res.lst = lst;
	res.size = ft_lstsize(lst);
	return (res);
}
