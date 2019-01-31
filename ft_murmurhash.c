/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_murmurhash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:23:58 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/31 16:48:27 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_nmix(unsigned int *h, unsigned int *k)
{
	*k *= MURMURMAGIC;
	*k ^= *k >> MURMURSHIFT;
	*k *= MURMURMAGIC;
	*h *= MURMURMAGIC;
	*h ^= *k;
}

unsigned int		ft_murmurhash(const void *key, size_t len,
									unsigned int seed)
{
	unsigned char	*data;
	unsigned int	k;
	unsigned int	t;

	data = (unsigned char *)key;
	while (len >= 4)
	{
		k = *(unsigned int *)data;
		ft_nmix(&seed, &k);
		data += 4;
		len -= 4;
	}
	t = 0;
	if (len == 3)
		t ^= data[2] << 16;
	if (len >= 2)
		t ^= data[1] << 8;
	if (len >= 1)
		t ^= data[0];
	ft_mmix(&seed, &t);
	ft_mmix(&seed, &len);
	seed ^= seed >> 13;
	seed *= MURMURMAGIC;
	seed ^= seed >> 15;
	return (seed);
}
