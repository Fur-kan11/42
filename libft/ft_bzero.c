/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:01:26 by mehozer           #+#    #+#             */
/*   Updated: 2026/01/17 21:30:00 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	

unsigned char	*p;

p = s;
while (n-->0)
	*p++=0;
	
}

#include <stdio.h>

int main(void)
{
	char st[]="Merhaba Dünya";
	ft_bzero(st,5);
	printf("%s",st);
}