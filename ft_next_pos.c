/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:51:24 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 13:51:28 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_next_pos(int pos, char **arr, t_tramin t, int n)
{
	int		i;
	int		j;

	i = pos / n;
	j = pos % n;
	while (i < n)
	{
		while (j < n)
		{
			if (ft_check_position(arr, i, j, t) == 1)
				return (pos);
			pos++;
			j++;
		}
		j = 0;
		i = pos / n;
	}
	return (pos - 1);
}
