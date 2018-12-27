/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:14:44 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 18:23:02 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static unsigned int	count_digits(int n);

char				*ft_itoa(int n)
{
	unsigned int	count;
	char			*res;

	count = count_digits(n);
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (res == NULL)
		return (NULL);
	res[count] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
		res[0] = '-';
	count--;
	while (n != 0)
	{
		if (n > 0)	
			res[count] = '0' + n % 10;
		else
			res[count] = '0' - n % 10;
		n /= 10;
		count--;
	}
	return (res);
}

static unsigned int	count_digits(int n)
{
	unsigned int	res;

	if (n == 0)
		return (1);
	if (n < 0)
		res = 1;
	else
		res = 0;
	while (n != 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}
