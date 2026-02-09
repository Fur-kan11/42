/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 00:32:07 by mehozer           #+#    #+#             */
/*   Updated: 2026/02/05 01:02:51 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i = 0;

    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }

    if (i < n)
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);

    return 0;
}

int main(void)
{
    int sonuc;

    sonuc = ft_strncmp("abf2", "abd", 3);
    printf("%d\n", sonuc);

    return 0;
}
