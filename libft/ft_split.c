/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:00:11 by dojeanno          #+#    #+#             */
/*   Updated: 2023/03/28 18:33:06 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordscount(char const *s, char c)
{
	int	i;
	int	words;

	if (!s)
		return (0);
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static char	*splitter(char const *s, char c, int *i)
{
	char	*str;
	int		j;

	j = 0;
	while (s[*i] == c)
		(*i)++;
	while (s[*i] && s[*i] != c)
	{
		j++;
		(*i)++;
	}
	str = ft_substr(s, *i - j, j);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	str = ft_calloc(sizeof(char *), wordscount(s, c) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wordscount(s, c))
	{
		str[j] = splitter(s, c, &i);
		if (str[j] == NULL)
		{
			while (j >= 0)
			{
				free (str[j]);
				j--;
			}
			free (str);
			return (NULL);
		}
		j++;
	}
	return (str);
}
