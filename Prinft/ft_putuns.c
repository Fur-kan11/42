/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 04:39:41 by mehozer           #+#    #+#             */
/*   Updated: 2026/03/14 00:33:06 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int nb)
{
	int	res;

	res = 0;
	if (nb >= 10)
		res += ft_putuns(nb / 10);
	res += ft_putchar((char)(nb % 10 + '0'));
	return (res);
}
