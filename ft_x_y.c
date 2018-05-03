/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_y.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:51:46 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 13:51:51 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static t_tramin	ft_count_x_y(char *arr, int n, int i)
{
	t_tramin	tetramin;

	while (arr[i] != '#')
		i++;
	tetramin.x1 = i % 5;
	tetramin.y1 = i / 5;
	i++;
	while (arr[i] != '#')
		i++;
	tetramin.x2 = i % 5;
	tetramin.y2 = i / 5;
	i++;
	while (arr[i] != '#')
		i++;
	tetramin.x3 = i % 5;
	tetramin.y3 = i / 5;
	i++;
	while (arr[i] != '#')
		i++;
	tetramin.x4 = i % 5;
	tetramin.y4 = i / 5;
	tetramin.c = n + 'A';
	tetramin.pos = 0;
	return (tetramin);
}

t_tramin		*ft_x_y(char **arr)
{
	t_tramin	*tetraminos;
	int			i;
	int			n;

	n = ft_count_tetraminos(arr);
	tetraminos = (t_tramin *)malloc(sizeof(*tetraminos) * (n + 1));
	i = 0;
	while (i < n)
	{
		tetraminos[i] = ft_count_x_y(arr[i], i, 0);
		i++;
	}
	tetraminos[i].c = '\0';
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (tetraminos);
}
