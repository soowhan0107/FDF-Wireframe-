/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:27:05 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:27:07 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*list;
	t_list	*tmp;

	head = (t_list*)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	tmp = NULL;
	while (lst != NULL)
	{
		list = (t_list*)malloc(sizeof(t_list));
		if (list == NULL)
			return (NULL);
		list = (f)(lst);
		if (tmp != NULL)
			tmp->next = list;
		else
			head = list;
		tmp = list;
		lst = lst->next;
	}
	return (head);
}
