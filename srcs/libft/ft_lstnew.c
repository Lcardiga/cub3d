/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:41:41 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/11 19:53:00 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_lstnew
PROTOTYPE:
	t_list *ft_lstnew(void *content);
TURN IN FILES:
 	-
PARAMETERS:
 	#1.  The content to create the new element with.
RETURN VALUE:
 	The new element.
EXTERNAL FUNCTIONS:
 	malloc
DESCRIPTION:
	Allocates (with malloc(3)) and returns a new
	element.  The variable ’content’ is initialized
	with the value of the parameter ’content’.  The
	variable ’next’ is initialized to NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	(*new).content = content;
	(*new).next = (t_list *)(void *)0;
	return (new);
}
