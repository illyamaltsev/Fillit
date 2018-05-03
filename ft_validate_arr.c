/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:49:44 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 14:49:44 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_validate_arr(char **arr)
{
	int i;
	int j;
	int len_sharps;
	int len_dots;

	i = -1;
	while (arr[++i] != NULL)
	{
		j = 0;
		len_dots = 0;
		len_sharps = 0;
		while (arr[i][j] != '\0')
		{
			if (arr[i][j] != '\n' && arr[i][j] != '.' & arr[i][j] != '#')
				ft_error();
			if (arr[i][j] == '.')
				len_dots++;
			if (arr[i][j] == '#')
				len_sharps++;
			j++;
		}
		if (len_dots != 12 || len_sharps != 4 || j != 20)
			ft_error();
	}
}
