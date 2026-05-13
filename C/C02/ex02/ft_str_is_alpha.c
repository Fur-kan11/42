/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 23:06:20 by mehozer           #+#    #+#             */
/*   Updated: 2025/10/11 19:23:40 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_lowercase;
	int	is_uppercase;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		is_lowercase = (str[i] >= 'a' && str[i] <= 'z');
		is_uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		if (!is_lowercase && !is_uppercase)
			return (0);
		i++;
	}
	return (1);
}
