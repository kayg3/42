# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 12:31:49 by jkozmus           #+#    #+#              #
#    Updated: 2023/09/26 18:52:40 by jkozmus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = 		cc
CFLAGS = 	-Wall -Werror -Wextra -I.

SRC = ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
         ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
         ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
         ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c \
         ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c \
         ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
         ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
         ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c

OBJ = 		$(SRC:.c=.o)

NAME = 		libft.a

.PHONY: 	all clean fclean re

all: 		$(NAME)

clean:
			rm -f $(OBJ)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

so:
			$(CC) $(CFLAGS) -shared $< -o libft.so $(OBJ)


$(NAME):	$(OBJ)
			ar -rc $(NAME) $(OBJ)
			ranlib $(NAME)
