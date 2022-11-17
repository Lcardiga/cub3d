/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:47:02 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/11 22:55:18 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_strjoin
PROTOTYPE:
	char *ft_strjoin(char const *s1, char const *s2);
TURN IN FILES:-
PARAMETERS:
 	#1.  The prefix string.
	#2.  The suffix string.
RETURN VALUE:
 	The new string.  NULL if the allocation fails.
EXTERNAL FUNCTIONS: malloc
DESCRIPTION:
	Allocates (with malloc(3)) and returns a new
	string, which is the result of the concatenation
	of ’s1’ and ’s2’.
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1;
	size_t	str2;
	size_t	i;
	char	*memory;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	memory = (char *)malloc(sizeof(*memory) * (str1 + str2 + 1));
	if (!memory)
		return (NULL);
	while (*s1 != '\0')
		memory[i++] = *s1++;
	while (*s2 != '\0')
		memory[i++] = *s2++;
	memory[i] = '\0';
	return (memory);
}
