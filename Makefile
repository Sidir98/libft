# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 21:31:16 by ibouabda          #+#    #+#              #
#    Updated: 2018/11/11 12:54:35 by ibouabda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_memcpy.c ft_strcat.c ft_strcpy.c ft_strncat.c ft_strncpy.c \
ft_atoi.c ft_memchr.c ft_memmove.c ft_memset.c ft_strcmp.c ft_strlen.c ft_strncmp.c ft_strstr.c

OBJ = ft_bzero.o ft_memcpy.o ft_strcat.o ft_strcpy.o ft_strncat.o ft_strncpy.o \
ft_atoi.o ft_memchr.o ft_memmove.o ft_memset.o ft_strcmp.o ft_strlen.o ft_strncmp.o ft_strstr.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
