/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:05:56 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/22 23:23:45 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i + 1], tab[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}
