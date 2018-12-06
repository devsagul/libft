/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:22:59 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/06 19:50:08 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char *))
{
	char			*res;
	unsigned int	i;

	res = ft_strdup(s);
	i = 0;
	while (res[i] != '\0')
	{
		res[i] = f(i, res + i);
		i++;
	}
	return (res);
}
