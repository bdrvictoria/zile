/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:14:46 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/15 21:08:37 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar();

void	ft_putnbr(int nb)
{
	int var;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	var = nb;
	if (var > 9)
	{
		ft_putnbr(var / 10);
		ft_putnbr(var % 10);
	}
	else
	{
		ft_putchar(var + '0');
	}
}
