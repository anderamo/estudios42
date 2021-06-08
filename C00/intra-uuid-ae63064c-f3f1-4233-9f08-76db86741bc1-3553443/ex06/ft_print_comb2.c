/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 07:36:33 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/27 13:40:06 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int n)
{
	int		decimas;
	int		unidades;
	char	decimasc;
	char	unidadesc;

	decimas = n / 10;
	unidades = n % 10;
	decimasc = decimas + '0';
	unidadesc = unidades + '0';
	ft_putchar(decimasc);
	ft_putchar(unidadesc);
}

void	ft_print_comb2(void)
{
	int	column1;
	int	column2;

	column1 = 0;
	column2 = 1;
	while (column1 <= 99)
	{
		while (column2 <= 99)
		{
			if (column1 < column2)
			{
				ft_div_mod(column1);
				ft_putchar(' ');
				ft_div_mod(column2);
				if (column1 != 98 || column2 != 99)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			column2++;
		}
		column2 = 0;
		column1++;
	}
}
