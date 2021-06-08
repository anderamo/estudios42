/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:50:11 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/18 19:25:01 by aamorin-         ###   ########.fr       */
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
			if ((xline == 1 && yline == 1) || (xline == 1 && yline == y))
				ft_putchar('A');
			else if ((xline == x && yline == 1) || (xline == x && yline == y))
				ft_putchar('C');
			else if ((xline > 1 && xline < x) && (yline > 1 && yline < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			xline++;
		}
		ft_putchar('\n');
		yline++;
	}
}
