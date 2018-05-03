/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:49:52 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 13:49:58 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0)
	{
		while (i < nb)
		{
			if (i * i == nb)
			{
				return (i);
			}
			i++;
		}
	}
	if (i == nb)
		return (ft_sqrt(nb + 1));
	else
		return (i);
}

int			ft_min_size(t_tramin *tetraminos)
{
	int	i;

	i = 0;
	while (tetraminos[i].c != '\0')
		i++;
	return (ft_sqrt(i * 4));
}
