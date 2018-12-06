/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:01:37 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/06 19:53:29 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static unsigned int	count_words(char const *s, char c);
static void			free_strtab(char **tab, unsigned int count);

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	count;
	char			**res;
	unsigned int	i;
	unsigned int	index;
	
	count = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * count);
	if (res == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < count)
	{
		while (s[index] == c)
			index++;
		res[i] = ft_strsub(s, index, s - ft_strchr((char *)s + index, c) - 1);
		if (res[i] == NULL)
		{
			free_strtab(res, i);
			free(res);
			return (NULL);
		}
		i++;
	}
	return (res);
}

static unsigned int	count_words(char const *s, char c)
{
	int				in_word;
	unsigned int	i;
	unsigned int	res;

	res = 0;
	in_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && in_word == 0)
		{
			in_word = 1;
			res++;
		}
		else if (s[i] != c)
			in_word = 1;
		i++;
	}
	return (res);
}

static void			free_strtab(char **tab, unsigned int count)
{
	unsigned int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
}
