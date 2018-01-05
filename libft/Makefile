# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 16:33:09 by jjaniec           #+#    #+#              #
#    Updated: 2017/12/16 17:47:23 by jjaniec          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAMES = ft_atoi.c \
		   ft_bzero.c \
		   ft_display_file.c \
		   ft_div_mod.c \
		   ft_foreach.c \
		   ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		   ft_isprint.c \
		   ft_itoa.c \
		   ft_lstadd.c \
		   ft_lstdel.c \
		   ft_lstdelone.c \
		   ft_lstiter.c \
		   ft_lstmap.c \
		   ft_lstnew.c \
		   ft_memalloc.c \
		   ft_memccpy.c \
		   ft_memchr.c \
		   ft_memcmp.c \
		   ft_memcpy.c \
		   ft_memdel.c \
		   ft_memmove.c \
		   ft_memset.c \
		   ft_putchar.c \
		   ft_putchar_fd.c \
		   ft_putendl.c \
		   ft_putendl_fd.c \
		   ft_putnbr.c \
		   ft_putnbr_fd.c \
		   ft_strstr.c \
		   ft_putstr.c \
		   ft_putstr_fd.c \
		   ft_range.c \
		   ft_recursive_factorial.c \
		   ft_strcat.c \
		   ft_str_capitalize.c \
		   ft_strchr.c \
		   ft_strclr.c \
		   ft_strcmp.c \
		   ft_strcpy.c \
		   ft_strdel.c \
		   ft_strdup.c \
		   ft_strequ.c \
		   ft_strichr.c \
		   ft_striter.c \
		   ft_striteri.c \
		   ft_strjoin.c \
		   ft_strlcat.c \
		   ft_strlen.c \
		   ft_strmap.c \
		   ft_strmapi.c \
		   ft_strncat.c \
		   ft_strncmp.c \
		   ft_strncpy.c \
		   ft_strnequ.c \
		   ft_strnew.c \
		   ft_strnstr.c \
		   ft_strrchr.c \
		   ft_strsplit.c \
		   ft_strsub.c \
		   ft_strtrim.c \
		   ft_tolower.c \
		   ft_toupper.c
OBJS = $(SRC_NAMES:.c=.o)
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFLAGS_SHARED = -Wall -Werror -Wextra -shared -fPIC
OBJ_PATH = ./objs/
SRC_PATH = ./srcs/

all: $(NAME)

$(NAME): $(OBJS) $(OBJ_PATH)
	ar rcs $(NAME) $(addprefix $(OBJ_PATH),$(OBJS)) libft.h
	ranlib $(NAME)
	rm $(SRC_NAMES)

$(OBJ_PATH): $(OBJS)
	mkdir $(OBJ_PATH) 2> /dev/null || true
	mv ./*.o $(OBJ_PATH) 2> /dev/null || true

$(OBJS): $(SRC_NAMES)
	$(CC) $(CFLAGS) -I$(SRC_PATH) -c $(SRC_NAMES)

clean:
	rm -rf $(addprefix $(OBJ_PATH),$(OBJS)) ./*.c 2> /dev/null || true

so: $(SRC_NAMES)
	$(CC) $(CFLAGS_SHARED) $(SRC_NAMES) -I$(SRC_PATH) -o libft.so

$(SRC_NAMES):
	cp $(addprefix $(SRC_PATH),$(SRC_NAMES)) . 2> /dev/null || true

fclean: clean
	rm -rf $(NAME) $(NAME:.a=.so) 2> /dev/null || true

re: fclean all

.PHONY: clean fclean all re
