/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 04:33:20 by mehozer           #+#    #+#             */
/*   Updated: 2026/03/17 06:44:08 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_hex(size_t nb)
{
	int		res;
	char	*base;

	res = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
		res += ft_putptr_hex(nb / 16);
	res += ft_putchar(base[nb % 16]);
	return (res);
}

int	ft_putptr(void *addr)
{
	int	res;

	res = 0;
	if (!addr)
		return (ft_putstr("(nil)"));
	res += ft_putstr("0x");
	res += ft_putptr_hex((size_t)addr);
	return (res);
}
