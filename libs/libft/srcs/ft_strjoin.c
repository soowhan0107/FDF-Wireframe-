/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:32:38 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:32:39 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*target;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	target = (char*)malloc(sizeof(char) * (len + 1));
	if (target == NULL)
		return (NULL);
	ft_strcpy(target, s1);
	ft_strcat(target, s2);
	return (target);
}
