/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:28:34 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:28:36 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	i = -1;
	dest = (char*)str1;
	src = (char*)str2;
	if (dest < src)
		while (++i < n)
			*(dest + i) = *(src + i);
	else
		while ((int)(--n) >= 0)
			*(dest + n) = *(src + n);
	return (str1);
}
