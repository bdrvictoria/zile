/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:14:36 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/25 18:55:45 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *nod;

	nod = (t_btree*)malloc(sizeof(t_btree));
	nod->left = NULL;
	nod->right = NULL;
	nod->item = item;
	return (nod);
}
