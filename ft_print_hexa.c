/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:44:14 by dojeanno          #+#    #+#             */
/*   Updated: 2023/04/27 17:49:15 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_len(unsigned int n)
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
