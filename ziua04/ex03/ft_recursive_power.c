/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 04:03:19 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/14 06:04:59 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || (nb >= 2 && power >= 31))
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
