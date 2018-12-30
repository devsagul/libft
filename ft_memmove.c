/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 15:44:03 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/30 16:04:13 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 1;
	while (i <= len)
	{
		tmp_dst[len - i] = tmp_src[len - i];
		i++;
	}
	return (dst);
}
