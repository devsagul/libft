/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 21:06:08 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/29 21:11:57 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	*ft_realloc(void *mem, size_t size)
{
	void	*res;
	size_t	minsize;
	size_t	memsize;

	if (mem == NULL)
		return (malloc(size));
	if (size == 0)
	{
		free(mem);
		return (NULL);
	}
	res = malloc(size);
	if (res == NULL)
		return (NULL);
	memsize = sizeof(mem);
	minsize = size < memsize ? size : memsize;
	ft_memmove(res, mem, minsize);
	free(mem);
	return (res);
}
