/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:39:01 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/09/09 15:44:32 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char *source;
	size_t s;

	s = size;
	source = src;
	if (s != 0)
	{
		while (--s != 0 && *source)
		{
			*dest++ = *source++;
		}
		*dest  = 0;
	}
	return (ft_strlen(src));

}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	s2[40];
	size_t	c;

	s1 = "Hello !";
	c = ft_strlcpy(s2,s1,30);
	printf("%s\n", s2);
	printf("Reuslt : %lo \n", c);
}
*/