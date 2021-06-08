/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 07:36:33 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/21 16:23:32 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int n)
{
	char	first;
	char	second;

	first = (n / 10) + '0';
	ft_putchar(first);
	second = (n % 10) + '0';
	ft_putchar(second);
}

void	ft_print_comb2(void)
{
	int	column1;
	int	column2;

	column1 = 0;
	column2 = 1;
	while (column1 <= 98)
	{
		column2 = column1 + 1;
		while (column2 <= 99)
		{
			ft_div_mod(column1);
			write(1, " ", 1);
			ft_div_mod(column2);
			if (!(column1 == 98))
				write(1, ",", 1);
			++column2;
		}
		++column1;
	}
}
