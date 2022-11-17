/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:46:08 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/26 18:47:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_putchar_fd
PROTOTYPE:
	void ft_putchar_fd(char c, int fd);
PARAMETERS:
	#1.  The character to output.
	#2.  The file descriptor on which to write.
RETURN VALUE:
	None
EXTERNAL FUNCTS.:
 	write
DESCRIPTION:
	Outputs the character ’c’ to the given file
	descriptor.
 */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
