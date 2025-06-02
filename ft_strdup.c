/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:35:21 by skarayil          #+#    #+#             */
/*   Updated: 2025/05/31 12:31:10 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*new_str;

	index = 0;
	while (src[index])
		index++;
	new_str = (char *)malloc(sizeof(char) * (index + 1));
	if (!new_str)
		return (NULL);
	index = 0;
	while (src[index])
	{
		new_str[index] = src[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
