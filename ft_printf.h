/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:03:49 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 15:41:52 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINT_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_printf_char(va_list arg);
int	ft_printf_dec(va_list arg);
int	ft_printf_unsigned_dec(va_list arg);
int	ft_printf_str(va_list arg);
int	ft_printf_hexa(char c, va_list arg);
int	ft_printf_ptr(va_list arg);
char	*trim_left_0(char const *s);
int	get_index_base(char *base, char c);
char	*add_one_str_base(char *str, char *base);
void	rev_str_base(char *str, char *base, int basesize);
void	ft_rev_char_tab(char *tab, int size);
char	*convert_dec_hex(uintptr_t i, char *base);
#endif
