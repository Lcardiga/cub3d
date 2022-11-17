/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:32:28 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/15 23:43:10 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
MANUAL:

NAME
     memset -- fill a byte string with a byte value

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     void *memset(void *b, int c, size_t len);

DESCRIPTION
     The memset() function writes len bytes of value c 
	 (converted to an unsigned char) to the string b.

EXAMPLE
	 memset (str, '_', 12); // fill the first 12 bytes with '_'
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
