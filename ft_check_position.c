/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:19:14 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 14:19:16 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_position(char **arr, int i, int j, t_tramin tetramin)
{
	int k;

	k = 0;
	while (arr[k] != NULL)
		k++;
	if (k <= tetramin.y1 + i || k <= tetramin.x1 + j ||
		k <= tetramin.y2 + i || k <= tetramin.x2 + j ||
		k <= tetramin.y3 + i || k <= tetramin.x3 + j ||
		k <= tetramin.y4 + i || k <= tetramin.x4 + j)
		return (0);
	if (arr[tetramin.y1 + i][tetramin.x1 + j] == '.' &&
		arr[tetramin.y2 + i][tetramin.x2 + j] == '.' &&
		arr[tetramin.y3 + i][tetramin.x3 + j] == '.' &&
		arr[tetramin.y4 + i][tetramin.x4 + j] == '.')
		return (1);
	return (0);
}
