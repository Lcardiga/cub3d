/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:39:03 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/15 23:53:51 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция isascii - это макрокоманда, которая классифицирует целые значения в 
коде ASCII, просмотром таблицы. При true она возвращает ненулевое значение и 0 
при false. Функция isascii определена для всех целых значений.
Возвращаемое значение:
Функция isascii возвращает ненулевое значение если младший байт лежит
в диапазоне от 0 до 127
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
