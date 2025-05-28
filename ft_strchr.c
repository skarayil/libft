/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:21:37 by skarayil          #+#    #+#             */
/*   Updated: 2025/05/28 15:11:12 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		to_find;

	to_find = 0;
	p = (char *)s;
	if (*p == (unsigned char)c)
		to_find = 1;
	else
	{
		while (*p != (unsigned char)c && *p != '\0')
		{
			p++;
			if (*p == (unsigned char)c)
				to_find = 1;
		}
	}
	if (to_find == 1)
		return (p);
	else
		return (0);
}
