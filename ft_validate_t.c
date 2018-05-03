/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_t.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:49:19 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 14:49:20 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	ft_validate_help(t_tramin t)
{
	int i;

	i = 0;
	if ((t.x1 == t.x2 && t.y1 + 1 == t.y2) ||
	(t.x1 + 1 == t.x2 && t.y1 == t.y2))
		i++;
	if ((t.x1 == t.x3 && t.y1 + 1 == t.y3) ||
	(t.x1 + 1 == t.x3 && t.y1 == t.y3))
		i++;
	if ((t.x1 == t.x4 && t.y1 + 1 == t.y4) ||
	(t.x1 + 1 == t.x4 && t.y1 == t.y4))
		i++;
	if ((t.x2 == t.x3 && t.y2 + 1 == t.y3) ||
	(t.x2 + 1 == t.x3 && t.y2 == t.y3))
		i++;
	if ((t.x2 == t.x4 && t.y2 + 1 == t.y4) ||
	(t.x2 + 1 == t.x4 && t.y2 == t.y4))
		i++;
	if ((t.x3 == t.x4 && t.y3 + 1 == t.y4) ||
	(t.x3 + 1 == t.x4 && t.y3 == t.y4))
		i++;
	if (i < 3)
		ft_error();
}

void		ft_validate_t(t_tramin *t, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_validate_help(t[i]);
		i++;
	}
}
