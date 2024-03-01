/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:48:14 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/01 17:37:48 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include <limits.h>

int	main(void)
{
	ft_printf("1////////////////////////////\n");

	int	i = 0;
	printf("%d and %d\n",
	printf("%d\n", i),
	ft_printf("%d\n", i));

	ft_printf("2////////////////////////////\n");
	
	printf("%d and %d\n",
	printf("%u\n", i),
	ft_printf("%u\n", i));
        
	ft_printf("3////////////////////////////\n");

	printf("%d and %d\n",
	printf("%i\n", i),
	ft_printf("%i\n", i));
	
	ft_printf("4////////////////////////////\n");

	i = -57;
	printf("%d and %d\n",
	printf("%d\n", i),
	ft_printf("%d\n", i));
	
	ft_printf("5////////////////////////////\n");

	printf("%d and %d\n",
	printf("%u\n", i),
	ft_printf("%u\n", i));
        
	ft_printf("6////////////////////////////\n");

	printf("%d and %d\n",
	printf("%i\n", i),
	ft_printf("%i\n", i));
	
	ft_printf("7////////////////////////////\n");

	i = INT_MIN;
	printf("%d and %d\n",
	printf("%d\n", i),
	ft_printf("%d\n", i));

	ft_printf("8////////////////////////////\n");

	char	c = '4';

	printf("%d and %d\n",
	printf("%d\n", c),
	ft_printf("%d\n", c));

	ft_printf("9////////////////////////////\n");

	printf("%d and %d\n",
	printf("%c\n", c),
	ft_printf("%c\n", c));

	ft_printf("10////////////////////////////\n");

	char	*str = "Salut 42 !";

	printf("%d and %d\n",
	printf("%s\n", str),
	ft_printf("%s\n", str));

	ft_printf("11////////////////////////////\n");

	printf("%d and %d\n",
	printf("%p\n", str),
	ft_printf("%p\n", str));

	ft_printf("12////////////////////////////\n");

	i = 4821;
	printf("%d and %d\n",
	printf("%x\n", i),
	ft_printf("%x\n", i));

	i = 0;
        printf("%d and %d\n",
        printf("%x\n", i),
        ft_printf("%x\n", i));

	ft_printf("13////////////////////////////\n");

	printf("%d and %d\n",
	printf("%X\n", i),
	ft_printf("%X\n", i));
	
	ft_printf("14////////////////////////////\n");

	i = -4821;
	printf("%d and %d\n",
	printf("%x\n", i),
	ft_printf("%x\n", i));

	ft_printf("15////////////////////////////\n");

	printf("%d and %d\n",
	printf("%X\n", i),
	ft_printf("%X\n", i));
}
