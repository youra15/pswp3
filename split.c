/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 16:18:46 by rchavast          #+#    #+#             */
/*   Updated: 2026-05-18 16:18:46 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *s)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ps_isspace(s[i]))
			i++;
		if (s[i])
			count++;
		while (s[i] && !ps_isspace(s[i]))
			i++;
	}
	return (count);
}

static char	*word_dup(char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	fill_tab(char **tab, char *s)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ps_isspace(s[i]))
			i++;
		start = i;
		while (s[i] && !ps_isspace(s[i]))
			i++;
		if (i > start)
		{
			tab[j] = word_dup(s, start, i);
			if (!tab[j++])
				return (0);
		}
	}
	tab[j] = NULL;
	return (1);
}

char	**ps_split(char *s)
{
	char	**tab;
	int		words;

	words = count_words(s);
	if (words == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, s))
	{
		free_split(tab);
		return (NULL);
	}
	return (tab);
}
