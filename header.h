/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:55:53 by ssarkisi          #+#    #+#             */
/*   Updated: 2017/11/26 13:55:58 by ssarkisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_tramin
{
	int		x1;
	int		y1;
	int		x2;
	int		y2;
	int		x3;
	int		y3;
	int		x4;
	int		y4;
	char	c;
	int		pos;
}				t_tramin;

void			ft_algoritm(t_tramin *tetramin, char **arr, int t, int n);
int				ft_check_position(char **arr, int i, int j, t_tramin tetramin);
int				ft_count_tetraminos(char **arr);
char			**ft_create_arr(char *str);
void			ft_error(void);
char			**ft_free_arr(char **arr, int n);
void			ft_insert(char **arr, int i, int j, t_tramin t);
int				ft_min_size(t_tramin *tetraminos);
char			**ft_new_arr(int n);
int				ft_next_pos(int pos, char **arr, t_tramin t, int n);
void			ft_print(char **arr);
void			ft_validate_arr(char **arr);
void			ft_validate_t(t_tramin *t, int n);
t_tramin		*ft_x_y(char **arr);
void			ft_rezo_pos(t_tramin *tetramin);

#endif
