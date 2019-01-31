/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmapnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 17:11:39 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/31 17:18:07 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_hashmap			ft_hashmapnew(size_t modulo, unsigned int size,
						unsigned int (*hash) (const void *, unsigned int))
{
	t_hashmap	res;
	size_t		length;

	ft_memset(&res, 0, sizeof(t_hashmap));
	if (modulo == 0 || hash == NULL)
		return (res);
	length = modulo * sizeof(t_queue);
	if (length / sizeof(t_queue) != modulo)
		return (res);
	res.values = (t_queue *)malloc(length);
	if (res.values == NULL)
		return (res);
	res.hash = hash;
	res.modulo = modulo;
	res.size = size;
	return (res);
}
