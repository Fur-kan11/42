/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 00:19:12 by mehozer           #+#    #+#             */
/*   Updated: 2025/10/15 00:38:28 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}
