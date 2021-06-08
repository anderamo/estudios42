/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 08:05:24 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/21 10:37:09 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	array[size];

	i = size - 1;
	a = 0;
	while (i >= 0)
	{
		array[a] = tab[i];
		a++;
		i--;
	}
	a = 0;
	while (a < size)
	{
		tab[a] = array[a];
		a++;
	}
}
