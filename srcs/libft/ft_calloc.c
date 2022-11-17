/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 00:29:06 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/23 02:25:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 NAME
     calloc, free, malloc, realloc, reallocf, valloc -- memory allocation

SYNOPSIS
     #include <stdlib.h>
     void	*calloc(size_t count, size_t size);

DESCRIPTION
     The malloc(), calloc(), valloc(), realloc(), and reallocf() functions
     allocate memory.  The allocated memory is aligned such that it can be
     used for any data type, including AltiVec- and SSE-related types.

     The malloc() function allocates size bytes of memory and returns a pointer
     to the allocated memory.

     The calloc() function contiguously allocates enough space for count objects
     that are size bytes of memory each and returns a pointer to the allocated
     memory. The allocated memory is filled with bytes of value zero.

RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), and valloc()
     functions return a pointer to allocated memory.  If there is an error, they
     return a NULL pointer and set errno to ENOMEM.
 */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*copy;
	size_t			i;

	i = 0;
	copy = malloc(size * count);
	if (!copy)
		return (NULL);
	while (i < count * size)
	{
		*(copy + i) = 0;
		i++;
	}
	return (copy);
}
