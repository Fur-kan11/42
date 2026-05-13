/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:31:23 by mehozer           #+#    #+#             */
/*   Updated: 2025/09/28 20:42:20 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alfabe;

	alfabe = 'a';
	while (alfabe <= 'z')
	{
		ft_putchar(alfabe);
		alfabe++;
	}
}
