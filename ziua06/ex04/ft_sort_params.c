/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 19:34:45 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/16 21:07:01 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			comp(char *s1, char *s2)
{
	int comp;
	int i;

	i = 0;
	comp = 0;
	while (1)
	{
		comp += (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (comp);
		if (s1[i] == s2[i])
			i++;
		else
			return (comp);
	}
}

void		ft_sort_params(char **lista, int size)
{
	int		i;
	int		sort;
	char	*var;

	i = 0;
	sort = 0;
	while (!sort)
	{
		i = 0;
		sort = 1;
		while (i < size - 1)
		{
			if (comp(lista[i], lista[i + 1]) > 0)
			{
				sort = 0;
				var = lista[i];
				lista[i] = lista[i + 1];
				lista[i + 1] = var;
			}
			i++;
		}
	}
}

void		afis(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
	ft_putchar('\n');
}

int			main(int argc, char **args)
{
	int i;

	i = 1;
	ft_sort_params(args + 1, argc - 1);
	while (i < argc)
	{
		afis(args[i]);
		i++;
	}
	return (0);
}
