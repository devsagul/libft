/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:57:33 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 16:19:05 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
		if (n / 10 != 0)
		{
			if (n < 0)
				ft_putnbr_fd(-(n / 10), fd);
			else
				ft_putnbr_fd(n / 10, fd);
		}
		if (n < 0)
			ft_putchar_fd('0' - n % 10, fd);
		else
			ft_putchar_fd('0' + n % 10, fd);
	}
}
