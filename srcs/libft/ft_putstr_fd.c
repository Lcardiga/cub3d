/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:46:17 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/26 19:45:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_putstr_fd
PROTOTYPE:
	void ft_putstr_fd(char *s, int fd);
TURN IN FILES:
 	-
PARAMETERS:
	#1.  The string to output.
	#2.  The file descriptor on which to write.
RETURN VALUE:
	None
EXTERNAL FUNCTS.:
 	write
DESCRIPTION:
	Outputs the string ’s’ to the given file
	descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
}
