/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:48:14 by ewoillar          #+#    #+#             */
/*   Updated: 2024/03/04 14:47:03 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include <limits.h>

//les int sont dans cet ordre -> printf ft_printf
//les affichages sont dans cet ordre -> ft_print printf

int	main(void)
{
	ft_printf("c////////////////////////////\n");
	char	c = 0;

	printf("1) %d and %d\n",
	printf("%c\n", c),
	ft_printf("%c\n", c));

	c = '0';
	printf("2) %d and %d\n",
	printf("%c\n", c),
	ft_printf("%c\n", c));

	printf("3) %d and %d\n",
	printf("   %c   \n", c),
	ft_printf("   %c   \n", c));

	printf("4) %d and %d\n",
	printf("%cz\n"),
	ft_printf("%cz\n"));
	
	char d = 'E';
	char e = '\0';
	printf("5) %d and %d\n",
	printf("%c %c %c test\n", c, d, e),
	ft_printf("%c %c %c test\n", c, d, e));

	ft_printf("s////////////////////////////\n");
	char	*s = "";

	printf("1) %d and %d\n",
	printf("%s\n", s),
	ft_printf("%s\n", s));

	s = NULL;
	printf("1) %d and %d\n",
	printf(" NULL %s NULL %s\n", s, s),
	ft_printf(" NULL %s NULL %s\n", s, s));

	ft_printf("p//////////////////////////////\n");

	char	*p = "pointer";
	printf("1) %d and %d\n",
	printf("%p\n", p),
	ft_printf("%p\n", p));

	p = 0;
	printf("1) %d and %d\n",
	printf("%p %p\n", p, p),
	ft_printf("%p %p\n", p, p));

	ft_printf("d/////////////////////////////\n");

	int	i = 0;
	printf("1) %d and %d\n",
	printf("%d\n", i),
	ft_printf("%d\n", i));

	ft_printf("%////////////////////////////////\n");

	printf("1) %d and %d\n",
	printf("%%50\n"),
	ft_printf("%%50\n"));

	printf("2) %d and %d\n",
	printf("%rr\n"),
	ft_printf("%rr\n"));

	printf("3) %d and %d\n",
	printf("solde a 50% whaou\n"),
	ft_printf("solde a 50% whaou\n"));

	ft_printf("mix//////////////////////////////\n");

	char	*quote = "Salut zigotos";
	int	nb1 = 45;
	unsigned int	nb2 = 23;

	printf("1) %d and %d\n",
	printf("%s tu as %i et %d jouets\n",quote, nb1, nb2),
	ft_printf("%s tu as %i et %d jouets\n", quote, nb1, nb2));
}
