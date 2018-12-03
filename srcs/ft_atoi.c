/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:57:28 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/03 19:03:12 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		sign;

	while (strchr("\t\n\v\f\r ", (int) *str) != NULL)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
