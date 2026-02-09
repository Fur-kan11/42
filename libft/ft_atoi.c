/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 01:04:37 by mehozer           #+#    #+#             */
/*   Updated: 2026/02/06 22:35:50 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	
	while (str[i] == ' ' || (str[i] >=9 && str[i] <= 13))
	{
		i++;
	}
	
	if (str[i] == '-' || str[i]=='+')
	{
		
			if (str[i] == '-')
			{
				sign= -1;
			}
			i++;
	}
	
	while (str[i]>= '0' && str[i]<='9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result*sign);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("   +42"));
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("4193abc"));
	printf("%d\n", ft_atoi("abc42"));
	printf("%d\n", ft_atoi("--42"));
	printf("%d\n", ft_atoi("  \t\n  123"));

	return (0);
}