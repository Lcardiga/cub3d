/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:18:37 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/22 23:37:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
NAME
     strlen, strnlen -- find length of string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>
     size_t	strlen(const char *s);
     size_t	strnlen(const char *s, size_t maxlen);

DESCRIPTION
     The strlen() function computes the length of the string s.  The strnlen()
     function attempts to compute the length of s, but never scans beyond the
     first maxlen bytes of s.

RETURN VALUES
     The strlen() function returns the number of characters that precede the
     terminating NUL character.  The strnlen() function returns either the
     same result as strlen() or maxlen, whichever is smaller
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
