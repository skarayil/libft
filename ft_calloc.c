/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:35:03 by skarayil          #+#    #+#             */
/*   Updated: 2025/05/28 15:57:54 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	total;
	size_t	*buff;

	buff = nmemb * size;
	buff = malloc(total);
	if (!buff)
		return (NULL);
	ft_memset(buff, '\0', total);
	return (buff);
}
