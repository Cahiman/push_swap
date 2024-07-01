/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:35:14 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/01 17:57:00 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int count_word(char *s, char c)
{
	int		count;
	bool	inside_word;

	count = 0;
	while (*s)
	{
		inside_word = false;
		while (*s == c)
			s++;
		while (*s != c && s)
		{
			if (!inside_word)
			{
				++count;
				inside_word = true;
			}
			*s++;
		}
	}
	return (count);
}

static char	*get_word(char *s, char c)
{
	static int	cursor = 0;
	char	*new_word;
	int		len;
	int		i;
	
	len = 0;
	i = 0;
	while (s[cursor] == c)
		++cursor;
	while((s[cursor + len] != c) && s[cursor + len])
		++len;
	new_word = malloc(sizeof(char) * (len + 1));
	if (!new_word)
		return (NULL);
	while ((s[cursor] != c) && s[cursor])
		new_word[i++] = s[cursor++];
	new_word[i] = '\0';
	return (new_word);
}

char	**split(char *s, char c)
{
	int		words_count;
	int		i;
	char	**tab;

	i = 0;
	words_count = count_word(s, c);
	if (!count_word)
		exit(1);
	tab = malloc(sizeof(char *) * (words_count + 2));
	if (!tab)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			tab[i] = malloc(sizeof(char));
			if (!tab[i])
				return (NULL);
			tab[i++][0] = '\0';
			continue ;
		}
		tab[i++] = get_word(s, c);
	}
	tab[i] = NULL;
	return (tab);
}