/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:05:29 by skarayil          #+#    #+#             */
/*   Updated: 2025/06/02 19:15:22 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_free(char **s, int i)
{
	if (!s)
		return ;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static int	ft_word_len(char const *s, char c)
{
	unsigned int	index;

	index = 0;
	while (s[index] && s[index] != c)
		index++;
	return (index);
}

static unsigned int	ft_str_len(char const *s, char c)
{
	unsigned int	index;
	unsigned int	count;

	index = 0;
	count = 0;
	if (!s[index])
		return (0);
	while (s[index])
	{
		if ((s[index] != c && s[index + 1] == c)
			|| (s[index] != c && s[index + 1] == '\0'))
			count++;
		index++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	str = (char **)malloc(sizeof(char *) * (ft_str_len(s, c) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			str[++i] = (char *)malloc(sizeof(char) * (ft_word_len(s, c) + 1));
			if (!str[i])
				ft_free(str, i);
			j = 0;
			while (*s && *s != c)
				str[i][j++] = *s++;
			str[i][j++] = '\0';
		}
	}
	str[++i] = '\0';
	return (str);
}
