/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:34:28 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:34:30 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*small == '\0')
		return ((char*)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == small[j] && n > i + j)
		{
			j++;
			if (small[j] == '\0')
				return ((char*)(big + i));
		}
		i++;
	}
	return (NULL);
}
