/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:57:39 by mehozer           #+#    #+#             */
/*   Updated: 2025/10/16 16:52:16 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void)argc;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
