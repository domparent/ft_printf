/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:04:48 by dojeanno          #+#    #+#             */
/*   Updated: 2023/04/27 19:06:45 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list args, const char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_putchar(format);
	else if (format == 's')
		ret += ft_putstr(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		ret += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ret += ft_putnbr_unsigned(va_arg(args, unsigned long));
	else if (format == 'p')
		ret += ft_putptr(va_arg(args, unsigned long));
	else if (format == 'x')
		ret += ft_puthexa_lower(va_arg(args, unsigned long));
	else if (format == 'X')
		ret += ft_puthexa_upper(va_arg(args, unsigned long));
	else if (format == '%')
		ret += write(1, "%", 1);
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret;

	if (!str)
		return (0);
	va_start(args, str);
	i = -1;
	ret = 0;
	while (str[++i])
	{
		if (str[i] == '%')
			ret += check_format(args, str[++i]);
		else
			ret += write(1, &str[i], 1);
	}
	va_end(args);
	return (ret);
}
