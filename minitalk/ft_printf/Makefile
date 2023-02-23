# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:28:06 by mgiovana          #+#    #+#              #
#    Updated: 2023/02/03 15:09:16 by mgiovana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
AR = ar rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_countdec.c ft_printunsnbr.c ft_countdec_uns.c\
        ft_printhexa1.c ft_printvoidptr.c ft_counthex.c\
        ft_printchar.c ft_print_int.c ft_print_hex.c\
        ft_printf.c ft_print_str.c ft_put_unsigned_nbr_fd.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -I. $< -o $@

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
