/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:38:24 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/10 19:17:57 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar();

void afisare (char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void pereche2 (char a, char b)
{
	char c;
	char d;

	c = a;
	while (c <= '9') 
	{
		d = b + 1;
		while (d <= '9')
		{
			afisare(a, b, c, d);
			if (!(a == '9' && b == '8' && c == '9' && d == '9'))
			{
				ft_putchar(',');
			}
			d++;
		}
		c++;
	}
}

void ft_print_comb2(void)
{
	char a;
	char b;

	a='0';

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			pereche2(a, b);
			b++;
		}
		a++;
	}
}
