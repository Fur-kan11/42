/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:58:34 by mehozer           #+#    #+#             */
/*   Updated: 2025/10/16 18:58:05 by mehozer          ###   ########.fr       */
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
	int	j;
	int	k;

	i = 1;
	k = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[k][j])
		{
			ft_putchar(argv[k][j]);
			j++;
		}
		ft_putchar('\n');
		k--;
		i++;
	}
}
