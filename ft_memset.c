/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:15:03 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/30 16:05:33 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;
	unsigned char ch;

	ch = (unsigned char)c;
	tmp = (unsigned char *)b;
	while (len > 0)
	{
		*tmp = ch;
		tmp++;
		len--;
	}
	return (b);
}
