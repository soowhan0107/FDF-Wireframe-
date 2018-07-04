/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:27:27 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:27:29 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*st;

	if (!(st = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(st, size);
	return (void*)st;
}
