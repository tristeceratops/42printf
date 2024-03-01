/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_neg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:20:06 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 11:27:03 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*trim_left(char const *s)
{
	size_t	start;

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
			break;
		i++;
	}
	return (i);
}

char	*add_one_str_base(char *str, char *base)
{
	int	index;
	int	i;

	i = 7;
	index = get_index_base(base, str[7]);
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

char	*ft_printf_hexa_neg(unsigned int i, char *base)
{
	long	temp;
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
		size--;
	}
	str = ft_calloc(sizeof(char), 8);
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
	ft_rev_char_tab(str + size, (8 - size));
	rev_str_base(str, base, ft_strlen(base));
	str = add_one_str_base(str, base);
	str = trim_left(str);
	return (str);
}
