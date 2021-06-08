/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 07:16:09 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/06 14:11:12 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		else if (nb >= 46341)
			return (0);
		i++;
	}
	return (0);
}
