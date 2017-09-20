/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:21:27 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/17 21:14:24 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		dim;
	int		i;
	char	*src2;

	i = 0;
	dim = 0;
	while (src[dim] != '\0')
		dim++;
	src2 = (char*)malloc(sizeof(*src2) * (dim + 1));
	while (src[i] != '\0')
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}
