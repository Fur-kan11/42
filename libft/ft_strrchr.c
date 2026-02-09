/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 00:26:18 by mehozer           #+#    #+#             */
/*   Updated: 2026/02/05 00:31:41 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    int i = 0;

    while (s[i])
        i++;

    if ((char)c == '\0')
        return (char *)&s[i];

    while (i >= 0)
    {
        if (s[i] == (char)c)
            return (char *)&s[i];
        i--;
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    printf("%s\n", ft_strrchr("banana", 'n'));
}
