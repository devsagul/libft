/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:33:43 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/04 21:34:26 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp;

	tmp = strchr(haystack, *needle);
	if (tmp == NULL)
		return (NULL);
	while (strncmp(haystack, tmp, len) != 0 && tmp != NULL)
		tmp = strchr(haystack + 1, *needle);
   return (tmp);	
}
