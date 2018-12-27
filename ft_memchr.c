/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:58:18 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 20:29:39 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ref;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	ref = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ref == tmp[i])
			return (tmp + i);
		i++;
	}
	return (NULL);
}
