/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:51:02 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/29 17:51:50 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dllist			*ft_dllstnew(void const *content, size_t content_size)
{
    t_dllist    *res;

    res = ft_lstnew(content, content_size);
    res->prev = NULL;
    return (res);
}