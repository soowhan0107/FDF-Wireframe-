/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:26:01 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:26:03 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*conv;
	int		leng;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	leng = ft_find_length(n);
	if (!(conv = (char*)malloc(sizeof(char) * (leng + 1))))
		return (NULL);
	conv[leng] = '\0';
	if (n < 0)
	{
		conv[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		conv[--leng] = (n % 10) + 48;
		n /= 10;
	}
	conv[--leng] = n + 48;
	return (conv);
}
