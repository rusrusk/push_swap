# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 22:29:17 by rkultaev          #+#    #+#              #
#    Updated: 2022/06/26 11:50:45 by rkultaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEADER = push_swap.h

LIBFTA = libft_pushswap/libft.a

SRCS = sources/checker_parsing.c sources/utils.c sources/index.c \
			sources/t_list.c sources/set_instructions.c \
			sources/two_num_sort.c sources/big_numbers.c sources/main.c \
			sources/is_sorted.c sources/five_num_sort.c sources/find_min.c \
			sources/four_num_sort.c sources/three_num_sort.c sources/error.c \
			sources/run_instructions.c
			
		

OBJ = $(SRCS:%.c=%.o)

CC = gcc -g



$(NAME) : $(OBJ) $(HEADER)
		make bonus -C libft_pushswap/
		$(CC) -o $(NAME) $(OBJ) $(LIBFTA)

all: $(NAME)

clean :
	rm -f $(OBJ)
	make clean -C libft_pushswap/

fclean : clean
	rm -f $(NAME)
	make clean -C libft_pushswap/

re : fclean all

.PHONY : all clean fclean re

