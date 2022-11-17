/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:21:10 by lcardiga          #+#    #+#             */
/*   Updated: 2022/11/17 03:18:20 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_free_all(int fd, char ***rest, int key)
{
	int	i;

	if (*rest != NULL && fd >= 0)
	{
		free((*rest)[fd]);
		(*rest)[fd] = NULL;
		i = 0;
		while (i < 1024 && ((*rest)[i] == NULL || (*rest)[i][0] == '\0'))
			i++;
		if (i == 1024)
		{
			while (i > 0)
			{
				i--;
				if ((*rest)[i] != NULL)
				{
					free((*rest)[i]);
					(*rest)[i] = NULL;
				}
			}
			free(*rest);
			*rest = NULL;
		}
	}
	return (key);
}
