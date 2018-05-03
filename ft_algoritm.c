/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoritm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:37:54 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 15:37:59 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	ft_last_position(char **arr, char tetra_c)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (arr[i] != NULL)
	{
		while (arr[i][j] != '\0')
		{
			if (arr[i][j] == tetra_c)
				arr[i][j] = '.';
			j++;
		}
		i++;
		j = 0;
	}
}

static int	ft_find_place(t_tramin tetramin, char **arr)
{
	int		i;
	int		j;
	int		n;

	n = 0;
	while (arr[n] != NULL)
		n++;
	i = tetramin.pos / n;
	j = tetramin.pos % n;
	while (arr[i] != NULL)
	{
		while (arr[i][j] != '\0')
		{
			if (ft_check_position(arr, i, j, tetramin) == 1)
			{
				ft_insert(arr, i, j, tetramin);
				return (1);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

static int	ft_filler(t_tramin *tetramin, char **arr, int t)
{
	if (tetramin[t].c != '\0')
	{
		if (ft_find_place(tetramin[t], arr) == 1)
			return (1);
		else
			return (0);
	}
	ft_print(arr);
	return (-2);
}

void		ft_algoritm(t_tramin *tetramin, char **arr, int t, int n)
{
	while (1)
	{
		if (t == -1)
		{
			t = 0;
			ft_rezo_pos(tetramin);
			arr = ft_free_arr(arr, n + 1);
			n++;
		}
		else if (ft_filler(tetramin, arr, t))
			t++;
		else if (!(ft_filler(tetramin, arr, t)))
		{
			if (t != 0)
			{
				ft_last_position(arr, tetramin[t - 1].c);
				tetramin[t].pos = 0;
				tetramin[t - 1].pos = ft_next_pos(tetramin[t - 1].pos + 1,
													arr, tetramin[t - 1], n);
			}
			t--;
		}
	}
}
