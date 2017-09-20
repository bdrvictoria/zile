/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 01:33:15 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/14 22:03:33 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_iterative_factorial(int nb)
{
	int rez;
	int i;

	i = 1;
	rez = 1;
	if (nb <= 0 || nb > 12)
	{
		return (0);
	}
	while (i <= nb)
	{
		rez = rez * i;
		i++;
	}
	return (rez);
}

int main(void)
{
printf("%d", ft_iterative_factorial(0));
return (0);
}
