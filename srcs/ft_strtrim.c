/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:56:44 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/06 19:52:50 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			len;

	start = 0;
	while (s[start] != ' ' && s[start] != '\t' && s[start] != '\n')
		start++;
	len = 0;
	while (s[start + len] != ' ' && s[start + len] != '\t' && s[start + len] != '\n')
		len++;
	return (ft_strsub(s, start, len));
}
