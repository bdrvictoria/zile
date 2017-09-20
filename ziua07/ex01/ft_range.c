/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:44:32 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/17 21:16:39 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *vect;

	i = 0;
	if (min >= max)
		return (0);
	vect = (int*)malloc(sizeof(*vect) * (max - min + 1));
	while (min + i < max)
	{
		vect[i] = min + i;
		i++;
	}
	vect[i] = 0;
	return (vect);
}
