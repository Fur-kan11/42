/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 00:35:32 by mehozer           #+#    #+#             */
/*   Updated: 2026/03/17 06:44:15 by mehozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_put(char c, va_list args);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_putuns(unsigned int nb);
int	ft_putnbr_hex(unsigned int nb, char format);
int	ft_putptr(void *addr);

#endif