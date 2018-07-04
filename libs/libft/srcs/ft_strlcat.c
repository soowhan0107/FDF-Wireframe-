/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:32:47 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:32:48 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size > (i + 1))
	{
		while (k < (size - i - 1))
		{
			dest[i + k] = src[k];
			k++;
		}
		dest[i + k] = '\0';
	}
	if (i <= size)
		return (i + j);
	else
		return (size + j);
}
