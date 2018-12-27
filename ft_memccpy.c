/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:50:35 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 20:31:03 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	if (n == 0)
		return (NULL);
	ch = (unsigned char)c;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		if (tmp_dst[i] == ch)
			break ;
		i++;
	}
	if (i == n)
		return (NULL);
	return ((void *)(tmp_dst + i + 1));
}
