/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:36:53 by dojeanno          #+#    #+#             */
/*   Updated: 2023/04/27 20:45:05 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(int n);
int	number_len(int n);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_hexa_len(unsigned long n);
int	ft_printf(const char *str, ...);
int	ft_puthexa_lower(unsigned int x);
int	ft_puthexa_upper(unsigned int x);
int	ft_putptr_hexa(unsigned long ptr);
int	ft_putnbr_unsigned(unsigned int n);
int	unsigned_number_len(unsigned int n);
int	check_format(va_list args, const char format);

#endif