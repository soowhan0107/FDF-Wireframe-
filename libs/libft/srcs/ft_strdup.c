/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:31:48 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:31:49 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (s1[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (++j < i)
		str[j] = s1[j];
	str[j] = '\0';
	return (str);
}
