/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 19:29:14 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/11 22:34:08 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int nr1;
	int nr2;

	nr1 = *a;
	nr2 = *b;
	*a = nr1 / nr2;
	*b = nr1 % nr2;
}
