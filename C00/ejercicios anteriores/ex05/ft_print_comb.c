/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 07:45:10 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/21 07:36:22 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char coma_espacio)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (coma_espacio == 's')
	{
		write(1, ',', 1);
		write(1, ' ', 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	coma_espacio;

	a = '0';
	coma_espacio = 'n';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (! (a == '7' && b == '8' && c == '9'))
					coma_espacio = 's';
				ft_putchar(a, b, c, coma_espacio);
				c++;
			}
			b++;
		}
		a++;
	}
}
