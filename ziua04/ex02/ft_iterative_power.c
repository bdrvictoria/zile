/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 02:36:51 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/14 06:04:05 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int rez;

	i = 2;
	if (power < 0 || (nb >= 2 && power >= 31))
		return (0);
	if (power == 0)
		return (1);
	rez = nb;
	if (power == 1)
		rez = nb;
	while (i <= power)
	{
		rez = rez * nb;
		i++;
	}
	return (rez);
}
