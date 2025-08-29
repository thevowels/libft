/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:26:41 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/08/29 16:43:22 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iscns(const char c, const char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	str_len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_iscns(s1[start], set))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (ft_iscns(s1[end], set))
		end--;
	str_len = end - start + 1;
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, str_len);
	str[end - start + 1] = 0;
	return (str);
}
