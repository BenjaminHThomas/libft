# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/29 11:11:38 by bthomas           #+#    #+#              #
#    Updated: 2024/05/21 19:32:14 by bthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES	= ft_bzero.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_toupper.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_isalpha.c \
		  ft_isdigit.c \
		  ft_memset.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_tolower.c

BONUS_CFILES = ft_lstnew_bonus.c \
		  ft_lstadd_front_bonus.c \
		  ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c \
		  ft_lstadd_back_bonus.c \
		  ft_lstclear_bonus.c \
		  ft_lstiter_bonus.c \
		  ft_lstmap_bonus.c \
		  ft_lstdelone_bonus.c

OFILES = $(CFILES:.c=.o)
BONUS_OFILES = $(BONUS_CFILES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

COMPILER = gcc

$(NAME):
	$(COMPILER) $(CFLAGS) -c $(CFILES) -I./
	ar -rcs $@ $(OFILES)

all: $(NAME)

bonus: $(OFILES) $(BONUS_OFILES)
	ar -rcs $(NAME) $^

clean:
	@echo "Cleaning object files..."
	@rm -f *.o

fclean: clean
	@echo "Removing program..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, flcean, re
