/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 23:08:37 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/15 21:17:35 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fct(char x)
{
	if (x == ' ' || x == '\t' || x == '\n')
		return (1);
	if (x == '\v' || x == '\f' || x == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int semn;
	int x;

	i = 0;
	semn = 1;
	x = 0;
	while (fct(str[i]) == 1)
		i++;
	if (str[i] == '-')
		semn = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (semn * x);
}
