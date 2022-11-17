/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 03:15:22 by lcardiga          #+#    #+#             */
/*   Updated: 2022/11/17 03:15:24 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	int		i;

	if (!lst)
		return (NULL);
	ptr = lst;
	i = ft_lstsize(lst) - 1;
	while (i > 0)
	{
		ptr = ptr->next;
		i--;
	}
	return (ptr);
}
