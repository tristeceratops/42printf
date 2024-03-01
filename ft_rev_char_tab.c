/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_char_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:07:22 by ewoillar          #+#    #+#             */
/*   Updated: 2024/02/29 15:09:22 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
