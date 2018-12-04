/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:28:04 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/04 21:31:03 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*tmp;
	size_t	len;

	tmp = strchr(haystack, *needle);
	if (tmp == NULL)
		return (NULL);
	len = ft_strlen(needle);
	while (strncmp(haystack, tmp, len) != 0 && tmp != NULL)
		tmp = strchr(haystack + 1, *needle);
   return (tmp);	
}
