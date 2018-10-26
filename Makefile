# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/26 17:47:25 by ibohun            #+#    #+#              #
#    Updated: 2018/10/26 21:20:44 by ibohun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

DIR = includes/

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
	  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
	  ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	  ft_tolower.c ft_toupper.c ft_atoi.c \
	  ft_strlen.c ft_strdup.c ft_strcmp.c ft_strncmp.c ft_strstr.c \
	  ft_strcpy.c ft_strncpy.c \

OBJ = $(SRC:%.c=%.o)

all:
	@gcc $(FLAGS) -I $(DIR) -c $(SRC)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
