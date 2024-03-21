/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:03:49 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/12 17:12:00 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_printf_char(va_list arg);
int	ft_printf_dec(va_list arg);
int	ft_printf_unsigned_dec(va_list arg);
int	ft_printf_str(va_list arg);
int	ft_printf_hex(va_list arg, char *base);
int	ft_printf_ptr(va_list arg);
int	print_hex(char *base, unsigned long long u);

#endif
