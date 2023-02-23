# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 12:22:27 by mgiovana          #+#    #+#              #
#    Updated: 2023/02/06 12:22:29 by mgiovana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = ft_server.c

CLIENT = ft_client.c

GCC = cc

FLAGS = -Wall -Werror -Wextra -g

NAME =  minitalk

NAME_SERVER = server

NAME_CLIENT = client

SRC_SERVER = $(SERVER)

SRC_CLIENT = $(CLIENT)

OBJ_SERVER = $(SRC_SERVER:.c=.o)

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

all: $(NAME)

%.o: %.c
	$(GCC) $(FLAGS) $< -o $@ -I ft_printf/ft_printf.h ft_printf/libftprintf.a

$(NAME):  ft_server ft_client

ft_server: make $(OBJ_SERVER)
	$(GCC) $(FLAGS) $(SRC_SERVER) -o $(NAME_SERVER)  ft_printf/libftprintf.a

ft_client: make $(OBJ_CLIENT)
	$(GCC) $(FLAGS) $(SRC_CLIENT) -o $(NAME_CLIENT) ft_printf/libftprintf.a
clean:
	rm -rf $(OBJ_CLIENT) $(OBJ_SERVER)
	make -C ft_printf clean

fclean: clean
	rm -rf $(NAME_SERVER) $(NAME_CLIENT)
	make -C ft_printf fclean
make:
	make -C ft_printf

re: fclean all

