/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:57:00 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/26 21:58:10 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_putnbr_fd
PROTOTYPE:
	void ft_putnbr_fd(int n, int fd);
TURN IN FILES:-
PARAMETERS:
	#1.  The integer to output.
	#2.  The file descriptor on which to write.
RETURN VALUE: None
EXTERNAL FUNCTS.: write
DESCRIPTION:
	Outputs the integer ’n’ to the given file
	descriptor.
 */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + 48, fd);
}
