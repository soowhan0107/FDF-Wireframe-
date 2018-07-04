/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:35:13 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:35:14 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		end;
	int		start;
	int		i;

	if (s == NULL)
		return (NULL);
	end = 0;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end++;
	if (s[end] == '\0')
		return (ft_strnew(0));
	start = end;
	while (s[end + 1] != '\0')
		end++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (!(new = (char*)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	i = -1;
	while (++i < (end - start + 1))
		new[i] = s[i + start];
	new[i] = '\0';
	return (new);
}
