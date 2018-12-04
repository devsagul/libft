/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:45:07 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/04 21:23:46 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*res;
	char	*tmp;

	res = strchr(s, c);
	if (res == NULL)
		return (NULL);
	tmp = strchr(res, c);
	while (tmp != NULL)
	{
		res = tmp;
		tmp = strchr(res, c);
	}
	return (res);
}
