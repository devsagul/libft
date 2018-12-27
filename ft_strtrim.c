/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:56:44 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 18:09:42 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			len;

	if (s == NULL)
		return (NULL);
	start = 0;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	len = ft_strlen(s + start);
	while ((s[start + len - 1] == ' ' || s[start + len - 1] == '\t' || s[start + len - 1] == '\n' || s[start + len - 1] == '\0') && len != 0)
		len--;
	return (ft_strsub(s, start, len));
}
