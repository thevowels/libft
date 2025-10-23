/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 05:08:49 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/10/23 19:43:03 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	**free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*create_word(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char c)
{
	char		**result;
	size_t		word_index;
	const char	*word_start;

	if (!str || count_words(str, c) == 0)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!result)
		return (NULL);
	word_index = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		word_start = str;
		while (*str && *str != c)
			str++;
		result[word_index] = create_word(word_start, str - word_start);
		if (!result[word_index])
			return (free_split(result));
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}
