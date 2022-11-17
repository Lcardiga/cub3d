/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:57:22 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/10 22:13:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_strtrim
PROTOTYPE:
	char *ft_strtrim(char const *s1, char const *set);
TURN IN FILES:
 	-
PARAMETERS:
	#1.  The string to be trimmed.
	#2.  The reference set of characters to trim.
RETURN VALUE:
 	The trimmed string.  NULL if the allocation fails.
EXTERNAL FUNCTIONS:
 	malloc
DESCRIPTION:
	Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, *(s1 + len)))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
