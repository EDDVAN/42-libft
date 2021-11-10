# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abazizi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:32:38 by abazizi           #+#    #+#              #
#    Updated: 2021/11/10 14:50:28 by abazizi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

LDFLAGS=-L.

LDLIBS=-lft

SRC = 	ft_atoi.c ft_isprint.c ft_lstlast.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_bzero.c ft_itoa.c \
		ft_lstmap.c ft_memset.c ft_strdup.c ft_strncmp.c ft_calloc.c ft_lstadd_back.c ft_lstnew.c ft_putchar_fd.c ft_striteri.c \
		ft_strnstr.c ft_isalnum.c ft_lstadd_front.c ft_lstsize.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_lstclear.c \
		ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isascii.c ft_lstdelone.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c \
		ft_substr.c ft_isdigit.c ft_lstiter.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c

OBJ = $(SRC:.c=.o)

INC = ./inc/

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

bonus: all

HEADER_DIR="includes"
SRC_DIR="srcs"
