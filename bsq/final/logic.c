/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:28:07 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/06 08:31:50 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_logic(void)
{
	int	i;
	int	j;
	int min;
	int counterx;
	int countery;
	int check_point[1][1];
	char a[5][5] = {
		{'.', '.', '.', '.', '.'} ,
		{'.', '.', '.', '.', '.'} ,
		{'.', '.', '.', '.', '.'} ,
		{'.', '.', '.', '.', '.'} ,
		{'.', '.', '.', '.', '.'}
	};

	min = 5;
	countery = 0;
	i = 0;
	j = 0;
	while (a[i][j] != '\0')
	{
		counterx = 0;
		if (a[i][j] == '.')
		{
			check_point[0][0] 
			if (a[i][j + min] == '\0')
			{
				j = 0;
				i++;
				break ;
			}
			while (counterx < min - 1)
			{
				/*if (a[i][j] != '.')
				{
					j = j - (counterx - 1);
					i = i - (countery - 1);
					countery = 0; 	
					break ;
				}*/
				j++;
				counterx++;
			}
			if (counterx + 1 == min)
				countery++;
			if (counterx == (min - 1) && countery == (min - 1))
			{
				printf("%d ",countery);
				printf("%d \n",counterx);
			}
		}
		j++;
	}
}

int	main ()
{
	ft_logic();
	return (0);
}
