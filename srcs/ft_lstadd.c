/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:21:32 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/06 19:37:55 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst == NULL)
		return ;
	if (new == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}
