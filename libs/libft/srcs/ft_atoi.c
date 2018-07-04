/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:24:33 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:24:36 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	num;
	int neg;

	neg = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == 45)
	{
		neg = -1;
		str++;
	}
	else if (*str == 43)
		str++;
	while (*str <= 57 && *str >= 48)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	return (num *= neg);
}
