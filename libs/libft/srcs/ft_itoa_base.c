/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:26:12 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:26:14 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_length(long n, int base)
{
	int	leng;

	leng = 1;
	if (n < 0)
	{
		n = -n;
		if (base == 10)
			leng++;
	}
	while (n >= (long)base)
	{
		n /= (long)base;
		leng++;
	}
	return (leng);
}

char		*ft_itoa_base(int value, int base)
{
	char	*stpoint;
	char	*res;
	long	n;
	int		neg;
	int		leng;

	stpoint = "0123456789ABCDEF";
	n = (long)value;
	leng = ft_check_length(n, base);
	neg = ((n < 0 && base == 10) ? 1 : 0);
	if (n < 0)
		n = -n;
	if (!(res = (char*)malloc(sizeof(char) * (leng + 1))))
		return (0);
	res[leng] = 0;
	while (leng > 0)
	{
		res[--leng] = stpoint[n % (long)base];
		n /= (long)base;
	}
	if (neg == 1)
		res[0] = 45;
	return (res);
}
