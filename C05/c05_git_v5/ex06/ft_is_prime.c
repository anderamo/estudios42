/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 07:36:43 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/05 12:38:23 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;
	int	m;

	m = nb / 2;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= m)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
