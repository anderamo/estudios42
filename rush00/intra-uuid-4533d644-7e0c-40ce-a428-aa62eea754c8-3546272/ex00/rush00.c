/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:19:41 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/18 12:20:18 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xline;
	int	yline;

	if (x < 1 || y < 1)
		return ;
	yline = 1;
	while (yline <= y)
	{
		xline = 1;
		while (xline <= x)
		{
			if ((xline > 1 && xline < x) && (yline > 1 && yline < y))
				ft_putchar(' ');
			else if ((xline > 1 && xline < x) && (yline == 1 || yline == y))
				ft_putchar('-');
			else if ((yline > 1 && yline < y) && (xline == 1 || xline == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			xline++;
		}
		ft_putchar('\n');
		yline++;
	}
}
