/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:57:47 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/27 15:46:28 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_striteri
PROTOTYPE:
	void ft_striteri(char *s, void (*f)(unsigned int, char*));
TURN IN FILES:-
PARAMETERS:
	#1.  The string on which to iterate.
	#2.  The function to apply to each character.
RETURN VALUE:
 	None.
EXTERNAL FUNCTIONS:
 	None.
DESCRIPTION:
	Applies the function f to each character of the
	string passed as argument, and passing its index
	as first argument.  Each character is passed by
	address to f to be modified if necessary
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
