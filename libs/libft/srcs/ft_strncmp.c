/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:33:45 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:33:47 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	while (str1[i] == str2[i] && str1[i] && i < (n - 1))
		i++;
	return (*(unsigned char*)(str1 + i) - *(unsigned char*)(str2 + i));
}
