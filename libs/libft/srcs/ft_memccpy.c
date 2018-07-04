/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:27:36 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:27:38 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char*)str1;
	src = (unsigned char*)str2;
	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (str1 + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
