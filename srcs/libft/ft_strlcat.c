/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:25:43 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/23 22:30:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Функция strlcat копирует из строки src в буфер dst не более чем size - 1
 символов и таким образом, чтобы продолжить строку, на которую указывает dst.
 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count_dest;
	size_t	count_src;
	size_t	i;

	i = 0;
	count_dest = ft_strlen(dst);
	count_src = ft_strlen(src);
	if (dstsize < count_dest + 1)
		return (dstsize + count_src);
	if (dstsize > count_dest + 1)
	{
		while (src[i] != '\0' && dstsize - 1 > count_dest + i)
		{
			dst[count_dest + i] = src[i];
			i++;
		}
	}
	dst[count_dest + i] = '\0';
	return (count_dest + count_src);
}
