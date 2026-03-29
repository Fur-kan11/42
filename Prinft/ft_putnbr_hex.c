/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 02:44:26 by mehozer           #+#    #+#             */
/*   Updated: 2026/03/14 00:32:44 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nb, char format)
{
	int		res;
	char	*base;

	res = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb >= 16)
		res += ft_putnbr_hex(nb / 16, format);
	res += ft_putchar(base[nb % 16]);
	return (res);
}
