/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:14:02 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/23 20:19:17 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *lista;

	lista = begin_list;
	if (lista)
	{
		while (lista->next)
			lista = lista->next;
	}
	return (lista);
}
