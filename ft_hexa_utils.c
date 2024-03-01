/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:25:00 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 13:36:50 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*trim_left_0(char const *s)
{
	size_t start;

	start = 0;
	while (s[start] && s[start] == '0')
		start++;
	return ((char *)&s[start]);
}

int	get_index_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			break ;
		i++;
	}
	return (i);
}

char	*add_one_str_base(char *str, char *base)
{
	int	index;
	int	i;

	i = ft_strlen(str) - 1;
	index = get_index_base(base, str[i]);
	if (index != 15)
		str[i] = base[index + 1];
	else
	{
		while (str[i] == base[ft_strlen(base) - 1] && i > 0)
		{
			str[i] = base[0];
			i--;
		}
		index = get_index_base(base, str[i]);
		str[i] = base[index + 1];
	}
	return (str);
}

void	rev_str_base(char *str, char *base, int basesize)
{
	int	index;

	while (*str != '\0')
	{
		index = get_index_base(base, *str);
		*str = base[- (index - (basesize - 1))];
		str++;
	}
}

void	ft_rev_char_tab(char *tab, int size)
{
	int	mem_a;
	int	mem_b;
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < size / 2)
	{
		mem_a = *tab;
		tab += size - i - j;
		mem_b = *tab;
		*tab = mem_a;
		tab -= size - i - j;
		*tab = mem_b;
		tab++;
		i++;
		j++;
	}
}
