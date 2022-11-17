/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:46:10 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/26 19:46:12 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_putendl_fd
PROTOTYPE:
	void ft_putendl_fd(char *s, int fd);
TURN IN FILES:-
PARAMETERS:
	#1.  The string to output.
	#2.  The file descriptor on which to write.
RETURN VALUE: None
EXTERNAL FUNCTS.: write
DESCRIPTION:
	Outputs the string ’s’ to the given file
	descriptor, followed by a newline.
 */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
