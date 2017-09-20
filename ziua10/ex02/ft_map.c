/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:50:45 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/22 23:21:50 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int	*tablou;

	i = 0;
	tablou = malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		tablou[i] = f(tab[i]);
		i++;
	}
	return (tablou);
}
