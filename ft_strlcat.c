/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:18:13 by skarayil          #+#    #+#             */
/*   Updated: 2025/05/28 18:59:05 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	j = ldest;
	if (ldest >= size)
		return (size + lsrc);
	while (i < size - 1 - ldest && src[i] != '\0')
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (ldest + lsrc);
}
