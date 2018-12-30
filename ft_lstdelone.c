/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:11:30 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/30 15:46:16 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*next;

	if (alst == NULL || del == NULL)
		return ;
	if (*alst == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	next = (*alst)->next;
	free(*alst);
	*alst = next;
}
