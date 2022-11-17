/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:46:34 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/11 23:04:30 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     strchr, strrchr -- locate character in string

LIBRARY:
     Standard C Library (libc, -lc)

SYNOPSIS:
     #include <string.h>
     char *strchr(const char *s, int c);
     char *strrchr(const char *s, int c);
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is con-
     sidered to be part of the string; therefore if c is `\0', the functions
     locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last
     occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located charac-
     ter, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
