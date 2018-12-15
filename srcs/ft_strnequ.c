/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:26:56 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/15 14:36:52 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		tmp;

	if (s1 == NULL || s2 == NULL)
		return (1);
	tmp = ft_strncmp(s1, s2, n);
	if (tmp == 0)
		return (1);
	return (0);
}
