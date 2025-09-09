/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_schr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:25:28 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/08/28 13:30:29 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	check;

	check = (char)c;
	str = (char *)s;
	while (*str && *str != check)
	{
		str++;
	}
	if (check == *str)
		return (str);
	return (NULL);
}

/*
	we are finding the char c inside the str.
	for the valid function call c will always be a valid char.
	I was worried about the signed and unsigned thing due to the
	pressures form previous problems.

	char	*ft_strchr(const char *s, int c)
	{
		unsigned char	ch;

		ch = (unsigned char)c;
		if (ch == 0)
		{
			while (*s)
				s++;
			return ((char *)s);
		}
		while (*s)
		{
			if ((unsigned char)*s == ch)
				return ((char *)s);
			s++;
		}
		return (NULL);
	}

*/