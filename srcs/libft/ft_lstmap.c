/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 03:15:27 by lcardiga          #+#    #+#             */
/*   Updated: 2022/11/17 03:15:29 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newls;
	t_list	*page;

	if (!lst)
		return (NULL);
	newls = ft_lstnew(f(lst->content));
	if (!newls)
	{
		ft_lstdelone(newls, del);
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
		page = ft_lstnew(f(lst->content));
		if (!page)
		{
			ft_lstclear(&newls, del);
			return (NULL);
		}
		ft_lstadd_back(&newls, page);
	}
	return (newls);
}
