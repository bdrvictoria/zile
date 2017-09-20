/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:07:17 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/16 17:28:50 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int comp;

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
