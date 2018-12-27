/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:25:02 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 19:45:20 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(1, s, len);
}
