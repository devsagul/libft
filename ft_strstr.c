/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:28:04 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 19:46:41 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	tmp = ft_strchr(haystack, *needle);
	while (tmp != NULL && ft_strncmp(tmp, needle, len) != 0)
		tmp = ft_strchr(tmp + 1, *needle);
	return (tmp);
}
