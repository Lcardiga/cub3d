/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:45:29 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/26 18:45:32 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     memcmp -- compare byte string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>
     int	memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
     The memcmp() function compares byte string s1 against
     byte string s2. Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are
     identical, otherwise returns the difference between the
     first two differing bytes (treated as unsigned char values,
     so that `\200' is greater than `\0', for example).  Zero-
     length strings are always identical.  This behavior is not
     required by C and portable code should only depend on the
     sign of the returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned int	i;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n--)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
