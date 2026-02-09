/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:03:50 by mehozer           #+#    #+#             */
/*   Updated: 2026/01/17 20:56:14 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = (unsigned char) c;
	return (s);
}

#include <stdio.h>

int	main(void)
{
	char st[]= "Merhaba Dunya";
	ft_memset(st,'a',5);
	
	printf("%s", st);
	return(0);
}