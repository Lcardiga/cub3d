/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:10:00 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/19 18:59:41 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     isdigit, isnumber -- decimal-digit character test
LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>
     int	isdigit(int c);
     int	isnumber(int c);

DESCRIPTION
     The isdigit() function tests for a decimal digit character.  Regardless
     of locale, this includes the following characters only:
     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
