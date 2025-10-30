/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:36:44 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/10/30 16:20:05 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

///////////////////////////////////////////////////////////////////////////////
//									CTYPE
///////////////////////////////////////////////////////////////////////////////

int		ft_isalpha(int c);
int		ft_isdigit(int i);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

///////////////////////////////////////////////////////////////////////////////
//									STRING
///////////////////////////////////////////////////////////////////////////////

int		ft_startswith(char *str, char *start);
char	**ft_split(char *str, char c);
size_t	ft_strlen(char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_sarr_free(char **arr);
char	*ft_strdup(char *str);

///////////////////////////////////////////////////////////////////////////////
//									PRINT
///////////////////////////////////////////////////////////////////////////////

void	ft_putstr(char *s);
size_t	ft_putstr_fd(char *str, int fd);
///////////////////////////////////////////////////////////////////////////////
//									MATH
///////////////////////////////////////////////////////////////////////////////

int		ft_iseven(int i);
int		ft_isodd(int i);

///////////////////////////////////////////////////////////////////////////////
//									OTHERS
///////////////////////////////////////////////////////////////////////////////

void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif