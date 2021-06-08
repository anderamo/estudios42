/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:27:54 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/02 08:46:22 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n) && !d)
	{
		d = s1[i] - s2[i];
		i++;
	}
	if ((s1[i] != '\0' || s2[i] != '\0') && (i < n) && !d)
	{
		d = s1[i] - s2[i];
	}
	return (d);
}