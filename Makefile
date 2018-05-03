#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssarkisi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/26 13:47:36 by ssarkisi          #+#    #+#              #
#    Updated: 2017/11/26 13:47:41 by ssarkisi         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

OBJC = ft_algoritm.c\
		ft_check_position.c\
		ft_count_tetraminos.c\
		ft_create_arr.c\
		ft_error.c\
		ft_free_arr.c\
		ft_insert.c\
		ft_main.c\
		ft_min_size.c\
		ft_new_arr.c\
		ft_next_pos.c\
		ft_print.c\
		ft_rezo_pos.c\
		ft_validate_arr.c\
		ft_validate_t.c\
		ft_x_y.c\

OBJO = $(OBJC:.c=.o)

NAME = fillit

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(OBJC)
	@gcc $(CFLAGS) $(OBJO) -o $(NAME)


clean:
	@rm -f $(OBJO)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all, re, clean, flcean
