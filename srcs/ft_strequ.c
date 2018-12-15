/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:25:32 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/15 14:36:12 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		tmp;

	if (s1 == NULL || s2 == NULL)
		return (0);
	tmp = ft_strcmp(s1, s2);
	if (tmp == 0)
		return (1);
	return (0);
}
