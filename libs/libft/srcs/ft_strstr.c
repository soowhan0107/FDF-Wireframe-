/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:34:55 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:34:56 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	int		i;
	int		j;

	i = 0;
	if (*small == '\0')
		return ((char*)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == small[j])
		{
			j++;
			if (small[j] == '\0')
				return ((char*)(big + i));
		}
		i++;
	}
	return (NULL);
}
