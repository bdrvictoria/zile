/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:20:28 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/24 15:57:24 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data)
{
	t_list *nod;

	nod = (t_list *)malloc(sizeof(nod));
	nod->next = NULL;
	nod->data = data;
	return (nod);
}
