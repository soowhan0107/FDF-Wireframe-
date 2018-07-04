/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:26:34 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:26:35 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*new;
	t_list	*tmp;

	new = *alst;
	while (new)
	{
		tmp = new->next;
		(*del)(new->content, new->content_size);
		free(new);
		new = tmp;
	}
	*alst = NULL;
}
