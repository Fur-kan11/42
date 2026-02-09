/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 23:44:02 by mehozer           #+#    #+#             */
/*   Updated: 2026/02/05 00:18:47 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
 unsigned char ch = (unsigned char)c;
while (*s)
{
        if (*s == ch)
            return (char *)s;
        s++;
    }
	if (ch == '\0')
        return (char *)s;
		
	return NULL; 
}

int main() {
    char *result = ft_strchr("Merhaba Dünya!", 'D');
    printf(result ? "Bulundu: %s\n" : "Bulunamadı.\n", result);
    return 0;
}