/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:57:28 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/30 15:34:44 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_helper(const char *str, int sign)
{
	long	res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		if (res < 0)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
		str++;
	}
	return (sign * (int)res);
}

int			ft_atoi(const char *str)
{
	int		sign;

	sign = 1;
	while (ft_strchr("\t\n\v\f\r ", (int)*str) != NULL)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	return (ft_atoi_helper(str, sign));
}
