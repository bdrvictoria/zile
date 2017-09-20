/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 19:35:00 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/23 19:43:46 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		k;
	t_list	*lista;

	k = 0;
	lista = begin_list;
	if (lista)
	{
		k = 1;
		while (lista->next)
		{
			lista = lista->next;
			k++;
		}
	}
	return (k);
}
