/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:21:35 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/18 19:28:56 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	g_contrabarra = 92;
int		g_yli = 1;
int		g_xvalue = 1;
int		g_xli;

void	rush(int x, int y)
{
	while (g_yli <= y)
	{
		g_xli = g_xvalue;
		while (g_xli <= x)
		{
			if ((g_xli == 1 && g_yli == 1) || (g_xli == x && g_yli == 1))
				if (g_xli == 1)
					ft_putchar('/');
			else
				ft_putchar(g_contrabarra);
			else if ((g_xli == 1 && g_yli == y) || (g_xli == x && g_yli == y))
				if (g_xli == 1)
					ft_putchar(g_contrabarra);
			else
				ft_putchar('/');
			else if ((g_xli > 1 && g_xli < x) && (g_yli > 1 && g_yli < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			g_xli++;
		}
		ft_putchar('\n');
		g_yli++;
	}
}
