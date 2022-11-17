/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:25:47 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/20 19:46:58 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     memmove -- copy byte string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>
     void *memmove(void *dst, const void *src, size_t len);

DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.

RETURN VALUES
     The memmove() function returns the original value of dst.
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src2;
	unsigned char	*dst2;
	size_t			i;

	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	i = 0;
	if (dst2 == 0 && src == 0)
		return (dst);
	if (dst2 > src2)
		while (len-- > 0)
			dst2[len] = src2[len];
	else
	{
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
