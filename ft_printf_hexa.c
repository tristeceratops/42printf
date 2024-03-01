/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:23:40 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 17:42:54 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*convert_neg_to_hex(unsigned int i, char *base)
{
	unsigned int temp;
	int	size;
	char	*str;
	int	j;

	if (i == 0)
		return "0";
	i = -i;
	temp = i;
	size = 8;
	while (temp != 0)
	{
		temp /= ft_strlen(base);
		size --;
	}
	str = ft_calloc(sizeof(char), 9);
	if (!str)
		return (0);
	j = 0;
	while (i != 0)
	{
		if (j < size)
			str[j] = base[0];
		else
		{
			str[j] = base[i % ft_strlen(base)];
			i /= ft_strlen(base);
		}
		j++;
	}
	str[j] = '\0';
	ft_rev_char_tab(str + size, (8 - size));
	rev_str_base(str, base, ft_strlen(base));
	str = add_one_str_base(str, base);
	str = trim_left_0(str);
	return (str);
}

char	*convert_dec_hex(uintptr_t i, char *base)
{
	uintptr_t	temp;
	int	size;
	char	*str;
	int	j;

	temp = i;
	size = 0;
	j = 0;
	while (temp != 0)
	{
		temp /= ft_strlen(base);
		size++;
	}
	str = ft_calloc(sizeof(char), size + 1);
	if (!str)
		return (0);
	while (i != 0)
	{
		str[j] = base[i % ft_strlen(base)];
		j++;
		i /= ft_strlen(base);
	}
	str[j] = '\0';
	ft_rev_char_tab(str, ft_strlen(str));
	return (str);
}

int	ft_printf_hexa(char c, va_list arg)
{
	int	i;
	char	*base;
	char	*str;
	int	size;

	i = va_arg(arg, int);
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (i > 0)
		str = convert_dec_hex(i, base);
	else if(i == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else
		str = convert_neg_to_hex(i, base);
	if (!str)
		return (0);
	else
	{
		ft_putstr_fd(str, 1);
		size = ft_strlen(str);
		free(str);
		return (size);
	}
}
