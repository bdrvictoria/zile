/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 18:59:06 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/16 19:05:30 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_rev_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **args)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(args[i]);
		i--;
	}
	return (0);
}
