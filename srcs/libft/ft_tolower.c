/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:27:16 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/11 19:41:16 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>

     int
     tolower(int c);

DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding 
	 lower-case letter.  Thenargument must be representable as an unsigned char 
	 or the value of EOF.

RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns the 
	 corresponding lower-case letter if there is one; otherwise, the argument is 
	 returned unchanged.

Функция tolower выполняет преобразование прописных букв в строчные. То есть, 
преобразует свой параметр в строчный эквивалент, если символ с заглавной буквы. 
Если, передаваемый символ итак строчный, то преобразование не выполняется и 
значение остаётся неизменным.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
