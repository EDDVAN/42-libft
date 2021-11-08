# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abazizi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 15:56:54 by abazizi           #+#    #+#              #
#    Updated: 2021/11/08 15:48:15 by abazizi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

objects = ft_atoi.o    ft_calloc.o  ft_isalnum.o ft_isdigit.o ft_memchr.o  \
		  ft_memmove.o ft_strchr.o  ft_strlcat.o ft_strlen.o  ft_strnstr.o ft_tolower.o \
		  ft_bzero.o   ft_isascii.o  ft_isalpha.o ft_isprint.o ft_memcpy.o  ft_memset.o  \
		  ft_strdup.o  ft_strlcpy.o ft_strncmp.o ft_strrchr.o ft_toupper.o ft_strjoin.o \
		  ft_strtrim.o ft_itoa.o ft_split.o
cc = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

${NAME}: ${objects}
	${cc} -c ${FLAGS} *.c
	ar rc libft.a *.o
ft_atoi.o : ft_atoi.c
	${cc} -c ${FLAGS} ft_atoi.c
ft_memchr.o : ft_memchr.c
	${cc} -c ${FLAGS} ft_memchr.c
