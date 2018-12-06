/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:16:01 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/06 21:03:16 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s != '\0')
	{
		f(s);
		s++;
	}
}
