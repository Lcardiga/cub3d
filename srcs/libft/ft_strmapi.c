/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:57:14 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/27 16:53:22 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_strmapi
PROTOTYPE:
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
TURN IN FILES:
 	-
PARAMETERS:
	#1.  The string on which to iterate.
	#2.  The function to apply to each character.
RETURN VALUE:
 	The string created from the successive applications
	of ’f’.  Returns NULL if the allocation fails.
EXTERNAL FUNCTIONS:
 	malloc
DESCRIPTION:
	Applies the function ’f’ to each character of the
	string ’s’ to create a new string (with malloc(3))
	resulting from successive applications of ’f’.
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*memory;

	i = 0;
	if (!s)
		return (0);
	memory = (char *)malloc(sizeof (char) * (ft_strlen(s)) + 1);
	if (memory == 0)
		return (0);
	while (s[i] != '\0')
	{
		memory[i] = f(i, s[i]);
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
