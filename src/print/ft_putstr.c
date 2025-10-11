/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 08:05:51 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/10/11 08:14:18 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/**
 * @brief Prints a string to standard output in a thread-safe manner
 * 
 * Outputs the string using a single write() call to prevent output
 * interleaving in multi-threaded environments.
 * 
 * @param s The null-terminated string to print
 * @note Thread-safe implementation using single atomic write
 */
void ft_putstr(char *s)
{
	size_t i;
	
	i = 0;
	while(s[i])
		i++;
	write(1,s,i);
}
