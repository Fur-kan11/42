/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 01:36:14 by mehozer           #+#    #+#             */
/*   Updated: 2026/03/17 06:25:18 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		res;
	int		temp;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	res = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			temp = ft_put(format[i], args);
			if (temp < 0)
				return (va_end(args), -1);
			res = res + temp;
		}
		else
			res += ft_putchar(format[i]);
		i++;
	}
	return (va_end(args), res);
}
