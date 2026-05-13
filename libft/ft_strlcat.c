/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 05:39:56 by mehozer           #+#    #+#             */
/*   Updated: 2026/02/20 02:15:57 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = 0;
	while (src[s_len] != '\0')
		s_len++;
	d_len = 0;
	while (dst[d_len] != '\0' && d_len < size)
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] != '\0' && (d_len + i) < (size - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
