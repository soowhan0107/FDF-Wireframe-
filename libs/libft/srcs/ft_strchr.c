/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:31:08 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:31:09 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*tmp;

	while (*str)
	{
		if (*str == c)
		{
			tmp = (char*)str;
			return (tmp);
		}
		str++;
	}
	if (c == '\0')
	{
		tmp = (char*)str;
		return (tmp);
	}
	return (NULL);
}
