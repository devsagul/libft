/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:01:37 by mbalon-s          #+#    #+#             */
/*   Updated: 2018/12/27 21:34:56 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			res++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (res);
}

static char			**free_strtab(char **tab, unsigned int count)
{
	unsigned int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	get_word_len(char const *s, char c)
{
	char	*pos;

	pos = ft_strchr(s, c);
	if (pos == NULL)
		return (ft_strlen(s));
	return (pos - s);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	count;
	char			**res;
	unsigned int	i;
	unsigned int	w_len;

	if (s == NULL)
		return (NULL);
	count = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * count + 1);
	if (res == NULL)
		return (NULL);
	res[count] = NULL;
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		w_len = get_word_len(s, c);
		res[i] = ft_strsub(s, 0, w_len);
		if (res[i] == NULL)
			return (free_strtab(res, i));
		s += w_len;
		i++;
	}
	return (res);
}
