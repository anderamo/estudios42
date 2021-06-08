/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 10:55:27 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/05 11:57:07 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_putarray(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
        {
            write(1, str[i], 1);
            i++;
            return (0);
        }
}
int	main(int a, char *argv[])
{
	int		i;
	char	**param[a];
	int		j;

	i = 1;
	j = 0;
	if (a == 1)
	{
		return (0);
	}
	while (i < a)
	{
		param[j] = &argv[i];	
		comparare
		j++;
		i++;
	}
}
