/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:37:32 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/19 19:33:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
MANUAL:
NAME
     bzero -- write zeroes to a byte string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <strings.h>

     void
     bzero(void *s, size_t n);

DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  
	 If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n)
	{
		*str = 0;
		str++;
		n--;
	}
}
