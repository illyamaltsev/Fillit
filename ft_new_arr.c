/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:28:43 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 14:28:44 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_new_arr(int n)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	arr = (char **)malloc(sizeof(*arr) * (n + 1));
	while (i < n)
	{
		arr[i] = malloc(n + 1);
		j = 0;
		while (j < n)
		{
			arr[i][j] = '.';
			j++;
		}
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
