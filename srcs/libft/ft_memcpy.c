/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:25:52 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/08 20:05:47 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     memcpy -- copy memory area

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     void *
     memcpy(void *restrict dst, const void *restrict src, size_t n);

DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.
------------------------------------------------------------------------------
dst — адрес буфера назначения
srс — адрес источника
n — количество байт для копирования

Описание:
Функция копирует n байт из области памяти, на которую указывает src в
область памяти, на которую указывает dst. Функция возвращает адрес
назначения dst.

Возвращаемое значение.
Функция memcpy возвращает указатель на dest.
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if ((n == 0) || (dst == src))
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
