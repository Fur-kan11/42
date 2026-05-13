/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:42:08 by mehozer           #+#    #+#             */
/*   Updated: 2025/09/29 19:13:08 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				k++;
				if (i != '7')
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
