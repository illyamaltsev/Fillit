/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:48:55 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 13:48:59 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static t_tramin	*ft_cut_tetraminos(t_tramin *t, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		while (t[i].x1 != 0 && t[i].x2 != 0 && t[i].x3 != 0 && t[i].x4 != 0)
		{
			t[i].x1--;
			t[i].x2--;
			t[i].x3--;
			t[i].x4--;
		}
		while (t[i].y1 != 0 && t[i].y2 != 0 && t[i].y3 != 0 && t[i].y4 != 0)
		{
			t[i].y1--;
			t[i].y2--;
			t[i].y3--;
			t[i].y4--;
		}
		i++;
	}
	ft_validate_t(t, n);
	return (t);
}

static char		*ft_read(int fd)
{
	char	tmp[4096];
	char	*str;
	int		i;

	i = 0;
	while (i < 4096 && read(fd, &tmp[i], 1))
		i++;
	tmp[i] = '\0';
	if ((str = (char *)malloc((i + 1) * sizeof(char))) == NULL || i == 4096)
		ft_error();
	i = 0;
	while (tmp[i])
	{
		str[i] = tmp[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void		ft_fillit(char *file_name)
{
	int			fd;
	int			n;
	char		**arr;
	t_tramin	*tetraminos;

	fd = open(file_name, O_RDWR);
	if (fd == -1)
		ft_error();
	arr = ft_create_arr(ft_read(fd));
	close(fd);
	ft_validate_arr(arr);
	tetraminos = ft_cut_tetraminos(ft_x_y(arr), ft_count_tetraminos(arr));
	n = ft_min_size(tetraminos);
	ft_algoritm(tetraminos, ft_new_arr(n), 0, n);
}

int				main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_fillit(argv[1]);
	}
	else
	{
		write(1,
"Usage: ./fillit [filename]\nYou must put between one and one filename!\n",
				70);
	}
	return (0);
}
