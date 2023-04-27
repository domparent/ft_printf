/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:55:17 by dojeanno          #+#    #+#             */
/*   Updated: 2023/04/27 15:50:50 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	number_len(int n)
{
	long	nb;
	int		i;

	nb = n;
	i = 1;
	if (nb < 0)
		i++;
	while (nb > 9 || nb < -9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (number_len(n));
}

int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10);
		ft_putnbr_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (number_len(n));
}
