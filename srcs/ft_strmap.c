/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:19:52 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/06 21:13:50 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char *))
{
	char	*res;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	res = ft_strdup(s);
	i = 0;
	while (res[i] != '\0')
	{
		f(res + i);
		i++;
	}
	return (res);
}
