/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:13:08 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 16:36:02 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_ptr(va_list arg)
{
	void	*ptr;
	int	count;
	char	*str;

	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	ptr = va_arg(arg, void *);
	str = convert_dec_hex((uintptr_t)ptr, "0123456789abcdef");
	if (!str)
		return (0);
	count += ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}
