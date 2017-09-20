/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:54:36 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/17 11:17:50 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_takes_place(int hour)
{
	int h;

	h = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (h >= 0 && h < 9)
		printf("0%d.00 A.M AND 0%d.00 A.M.\n", h, h + 1);
	if (h == 9)
		printf("0%d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
	if (h >= 10 && h < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
	if (h == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", h, h + 1);
	if (h == 12)
		printf("%d.00 P.M. AND 0%d.00 P.M.\n", h, h % 12 + 1);
	if (h > 12 && h < 21)
		printf("0%d.00 P.M. AND 0%d.00 P.M.\n", h % 12, h % 12 + 1);
	if (h == 21)
		printf("0%d.00 P.M. AND %d.00 P.M.\n", h % 12, h % 12 + 1);
	if (h == 22)
		printf("%d.00 P.M. AND %d.00 P.M.\n", h % 12, h % 12 + 1);
	if (h == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", h % 12, h % 12 + 1);
	if (h == 24)
		printf("0%d.00 A.M. AND 0%d.00 A.M.\n", h % 12, 1);
}
