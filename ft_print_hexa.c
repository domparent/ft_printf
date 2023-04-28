/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:44:14 by dojeanno          #+#    #+#             */
/*   Updated: 2023/04/27 20:45:25 by dojeanno         ###   ########.fr       */
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

int	ft_puthexa_lower(unsigned int x)
{
	char	*base;

	base = "0123456789abcdef";
	if (x >= 16)
		ft_puthexa_lower(x / 16);
	write(1, &base[x % 16], 1);
	return (ft_hexa_len(x));
}

int	ft_puthexa_upper(unsigned int x)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (x >= 16)
		ft_puthexa_upper(x / 16);
	write(1, &base[x % 16], 1);
	return (ft_hexa_len(x));
}

int	ft_putptr(void *ptr)
{
	int				ret;
	unsigned long	p;

	p = (unsigned long)ptr;
	ret = 2;
	write(1, "0x", 2);
	ret += ft_putptr_hexa(p);
	return (ret);
}

int	ft_putptr_hexa(unsigned long ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr >= 16)
		ft_putptr_hexa(ptr / 16);
	write(1, &base[ptr % 16], 1);
	return (ft_hexa_len(ptr));
}
