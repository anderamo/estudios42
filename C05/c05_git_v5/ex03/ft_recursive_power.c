/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:44:02 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/04 17:44:13 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (aux * ft_recursive_power(aux, power - 1));
}
