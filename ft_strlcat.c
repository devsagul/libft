/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:52:20 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 19:45:49 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	dst += len;
	if (len > size)
	{
		len = size;
		size = 0;
	}
	else
		size -= len;
	len += ft_strlen(src);
	i = 0;
	while (size > i + 1 && src[i] != '\0')
	{
		*dst = src[i];
		dst++;
		i++;
	}
	*dst = '\0';
	return (len);
}
