/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:34:37 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:34:38 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*begin;

	begin = (char*)str;
	while (*str)
		str++;
	if (c == '\0')
		return ((char*)str);
	while (str > begin)
	{
		if (*str == c)
			return ((char*)str);
		str--;
	}
	if (str == begin && *str == c)
		return ((char*)str);
	else
		return (NULL);
}
