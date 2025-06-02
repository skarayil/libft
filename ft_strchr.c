/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:21:37 by skarayil          #+#    #+#             */
/*   Updated: 2025/05/31 12:30:28 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		find;

	find = 0;
	ptr = (char *)s;
	if (*ptr == (unsigned char)c)
		find = 1;
	else
	{
		while (*ptr != (unsigned char)c && *ptr != '\0')
		{
			ptr++;
			if (*ptr == (unsigned char)c)
				find = 1;
		}
	}
	if (find == 1)
		return (ptr);
	else
		return (0);
}
