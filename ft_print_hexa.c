/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:44:14 by dojeanno          #+#    #+#             */
/*   Updated: 2023/04/27 19:05:46 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_len(unsigned long n)
{
	int	i;

	i = 1;
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_puthexa_lower(unsigned long x)
{
	char	*base;

	base = "0123456789abcdef";
	if (x >= 16)
		ft_puthexa_lower(x / 16);
	write(1, &base[x % 16], 1);
	return (ft_hexa_len(x));
}

int	ft_puthexa_upper(unsigned long x)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (x >= 16)
		ft_puthexa_upper(x / 16);
	write(1, &base[x % 16], 1);
	return (ft_hexa_len(x));
}

int	ft_putptr(unsigned long ptr)
{
	int	ret;

	ret = 2;
	write(1, "0x", 2);
	ret += ft_puthexa_lower(ptr);
	return (ret);
}
