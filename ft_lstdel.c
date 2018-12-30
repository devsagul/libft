/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:14:55 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/30 15:43:04 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	if (alst == NULL || del == NULL)
		return ;
	while (*alst != NULL)
		ft_lstdelone(alst, del);
}
