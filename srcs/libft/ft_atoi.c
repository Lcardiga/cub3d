/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:08:59 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/11 21:30:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 NAME
     atoi, atoi_l -- convert ASCII string to integer

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <stdlib.h>

     int	atoi(const char *str);

     #include <xlocale.h>

     int
     atoi_l(const char *str, locale_t loc);

DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to
     by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

     While the atoi() function uses the current locale, the atoi_l() function
     may be passed a locale directly. See xlocale(3) for more information.

Возвращаемое значение:

Функция возвращает число - результат преобразование строки, если в начале
строки содержится число. Если в начале строки стоит символ не являющейся 
цифрой, то функции возвращает ноль.
Описание:
Функция atoi () преобразует строку, на которую указывает аргумент str, 
в число типа int. Преобразование заканчивается, когда встречается символ 
не являющейся цифрой или, когда будет преобразована вся строка. Если 
первый символ строки не цифра, то функция вернет 0 и завершит работу.
Если число в строке превышает максимальный или минимальный размер числа 
типа int, то функция возвращает соответственно максимально или минимально 
допустимое число для типа int. Возвращаемая величина зависит от аппаратной 
платформы на которой запускается программа.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	result;
	long int	old;
	int			sign;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		str++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		old = result;
		result = result * 10 + (str[i] - '0');
		i++;
		if ((old < 0 && result > 0) || (old > 0 && result < 0))
			return ((sign == 1) * -1);
	}
	return (result * sign);
}
