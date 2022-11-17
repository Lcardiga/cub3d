/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:16:47 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/19 19:23:40 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция toupper выполняет преобразование строчных букв в прописные. То есть, 
преобразует свой параметр в прописной эквивалент, если символ строчный. Если, 
передаваемый символ итак заглавный, то преобразование не выполняется и значение 
остаётся неизменным.
Результат, возвращаемый функцией после преобразования аргумента,  
зависит от используемого языка.

DESCRIPTION
     The toupper() function converts a lower-case letter to the corresponding 
	 upper-case letter.  The argument must be repre-
     sentable as an unsigned char or the value of EOF.

     Although the toupper() function uses the current locale, the toupper_l() 
	 function may be passed a locale directly. See
     xlocale(3) for more information.

RETURN VALUES
     If the argument is a lower-case letter, the toupper() function returns 
	 the corresponding upper-case letter if there is one;
     otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
