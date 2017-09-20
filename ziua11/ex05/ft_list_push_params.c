/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:22:17 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/25 14:09:28 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*lista;
	t_list	*idk;

	lista = NULL;
	idk = NULL;
	i = 0;
	while (i < ac)
	{
		lista = ft_create_elem(av[i]);
		lista->next = idk;
		idk = lista;
		i++;
	}
	return (lista);
}
