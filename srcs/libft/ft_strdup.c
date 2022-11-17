/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:16:30 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/22 23:51:11 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     strdup, strndup -- save a copy of a string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>
     char *strdup(const char *s1);
     char *strndup(const char *s1, size_t n);

DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer
     may subsequently be used as an argument to the function free.

     If insufficient memory is available, NULL is returned and errno
     is set to ENOMEM.

     The strndup() function copies at most n characters from the string
     s1 always NUL terminating the copied string.

EXTERNAL FUNCTIONS: malloc
 */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	while (*s1)
		copy[i++] = *s1++;
	copy[i] = '\0';
	return (copy);
}
