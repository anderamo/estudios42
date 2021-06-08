/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 08:43:42 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/05 13:11:31 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;
	int	m;

	m = nb / 2;
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= m)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	while (ft_is_prime(nb) != 1 && nb <= 2147483647)
		nb++;
	return (nb);
}
