/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:31:31 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/03 19:42:57 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*strchr(const char *s, int c)
{
	size_t	i;
	char	c1;

	i = 0;
	c1 = (char)c;
	while (s[i] != '\0' && s[i] != c1)
		i++;
	if (s[i] == c1)
		return (s + i);
	return (NULL);
}
