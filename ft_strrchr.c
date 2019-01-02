/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:45:07 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/02 20:57:58 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	*tmp;

	res = ft_strchr(s, c);
	if (res == NULL)
		return (NULL);
	if (c == '\0')
		return (res);
	tmp = ft_strchr(res + 1, c);
	while (tmp != NULL)
	{
		res = tmp;
		tmp = ft_strchr(res + 1, c);
	}
	return (res);
}
