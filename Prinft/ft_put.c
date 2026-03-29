/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 04:40:43 by mehozer           #+#    #+#             */
/*   Updated: 2026/03/17 06:43:50 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put(char c, va_list args)
{
	int	res;

	res = 0;
	if (c == 'c')
		res += ft_putchar(va_arg(args, int));
	else if (c == 's')
		res += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		res += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		res += ft_putuns(va_arg(args, unsigned int));
	else if (c == 'p')
		res += ft_putptr(va_arg(args, void *));
	else if (c == 'x' || c == 'X')
		res += ft_putnbr_hex(va_arg(args, long long), c);
	else if (c == '%')
		res += ft_putchar('%');
	else
		return (-1);
	return (res);
}
