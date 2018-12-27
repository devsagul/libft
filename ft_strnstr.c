/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:33:43 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 19:48:20 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp;
	size_t	str_len;
	size_t	cur_pos;

	str_len = ft_strlen(needle);
	if (str_len == 0)
		return ((char *)haystack);
	tmp = ft_strchr(haystack, *needle);
	cur_pos = tmp - haystack;
	while (tmp != NULL && ft_strncmp(tmp, needle, str_len) != 0 &&
			cur_pos + str_len <= len)
	{
		tmp = ft_strchr(tmp + 1, *needle);
		cur_pos = tmp - haystack;
	}
	if (cur_pos + str_len > len)
		return (NULL);
	return (tmp);
}
