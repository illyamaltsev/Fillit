/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_tetraminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:36:36 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 14:36:37 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_count_tetraminos(char **arr)
{
	int i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}
