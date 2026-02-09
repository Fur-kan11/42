/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:31:09 by mehozer           #+#    #+#             */
/*   Updated: 2026/01/25 02:08:45 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	
	while (n-->0)
		*d++ = *s++;
		
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char st[]="Merhaba Dunya";
	ft_memcpy(st+2,"asd",13);
	
	printf("%s",st);
}