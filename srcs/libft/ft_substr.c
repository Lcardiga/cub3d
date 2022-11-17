/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 00:30:59 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/24 02:03:25 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_substr
PROTOTYPE:
	char *ft_substr(char const *s, unsigned int start, size_t len);
PARAMETERS:
	#1.  The string from which to create the substring.
	#2.  The start index of the substring in the string ’s’.
	#3.  The maximum length of the substring.
RETURN VALUE:
	The substring.  NULL if the allocation fails.
EXTERNAL FUNCTIONS: malloc
DESCRIPTION:
	Allocates (with malloc(3)) and returns a substring from the string ’s’.
	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if (!s)
		return ((char *)0);
	while (s[i])
		i++;
	if (start > i)
		len = 0;
	if (len > i - start)
		len = i - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (substr);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
