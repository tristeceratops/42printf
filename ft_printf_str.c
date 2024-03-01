/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:06:25 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 18:24:33 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_str(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
