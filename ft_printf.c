/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:55:57 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 18:16:39 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"
#include <stdio.h>

int	ft_call_print(char c, va_list arg)
{
	int	count;

	if (c == 'd' || c == 'i')
		count = ft_printf_dec(arg);
	else if (c == 'u')
		count = ft_printf_unsigned_dec(arg);
	else if (c == 'c')
		count = ft_printf_char(arg);
	else if (c == 's')
		count = ft_printf_str(arg);
	else if (c == 'x' || c == 'X')
		count = ft_printf_hexa(c, arg);
	else if (c == 'p')
		count = ft_printf_ptr(arg);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		count++;
	}
	else
		count = 0;
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list arg;
	int	count;
	int	check_call;

	va_start(arg, str);
	count = 0;
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			str++;
			count++;
		}
		else
		{
			check_call = ft_call_print(*(str + 1), arg);
			if (check_call != 0)
			{
				str += 2;
				count += check_call;
			}
			else
				str++;
		}
	}
	return (count);
}
