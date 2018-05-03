/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:50:14 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 13:50:19 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_print(char **arr)
{
	int i;

	i = 0;
	while (arr[i] != NULL)
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
	exit(0);
}
