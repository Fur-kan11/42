/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 01:34:30 by mehozer           #+#    #+#             */
/*   Updated: 2026/03/17 06:15:40 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		res;

	res = 0;
	nb = n;
	if (nb < 0)
	{
		res += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		res += ft_putnbr(nb / 10);
	res += ft_putchar((nb % 10) + '0');
	return (res);
}
