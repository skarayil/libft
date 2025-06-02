/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:04:58 by skarayil          #+#    #+#             */
/*   Updated: 2025/06/02 18:30:43 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*strt;
	char const	*fnsh;
	char		*mem;
	size_t		size;

	if (!s1 || !set)
		return (NULL);
	strt = s1;
	while (*strt && ft_strchr(set, *strt))
		strt++;
	fnsh = s1 + ft_strlen(s1) - 1;
	while (*fnsh && ft_strchr(set, *fnsh))
		fnsh--;
	size = fnsh - strt + 1;
	mem = (char *)malloc((size + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, strt, size + 1);
	mem[size] = '\0';
	return (mem);
}
