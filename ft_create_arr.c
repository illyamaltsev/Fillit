/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:28:11 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 14:28:12 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static char	**ft_str_to_arr(char *str)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(arr) * (26 + 1));
	while (str[i] != '\0')
	{
		k = -1;
		arr[j] = malloc(20 + 1);
		while (++k < 20 && str[i] != '\0')
		{
			arr[j][k] = str[i];
			i++;
		}
		arr[j][k] = '\0';
		if (str[i] != '\0')
			i++;
		j++;
	}
	arr[j] = NULL;
	free(str);
	return (arr);
}

char		**ft_create_arr(char *str)
{
	int i;
	int d;
	int s;
	int n;

	i = 0;
	d = 0;
	s = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
			d++;
		if (str[i] == '#')
			s++;
		if (str[i] == '\n')
			n++;
		i++;
	}
	if (d != s * 3 || (d + s) != n * 3.2)
		ft_error();
	return (ft_str_to_arr(str));
}
