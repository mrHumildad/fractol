# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 15:58:11 by mnotaro           #+#    #+#              #
#    Updated: 2023/09/29 13:37:15 by mnotaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
CC = cc
INCL = libft.h
CFLAGS = -Wall -Wextra -Werror
FUNC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_memmove.c \
ft_memchr.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c \
ft_strnstr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strrchr.c ft_split.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

FILES = $(FUNC:.c=.o)
BFILES = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(FILES)
	ar rcs $(NAME) $(FILES)

%.o : %.c Makefile $(INCL)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: .bonus

.bonus: $(BFILES) $(INCL)
	touch .bonus
	ar rcs $(NAME) $(BFILES)

tester: $(INCL) $(NAME)
	$(CC) $(CFLAGS) tester.c -o tester -L./ -lft -I./

clean:
	rm -rf $(FILES) $(BFILES)

fclean: clean
	rm -rf $(NAME)

re: 
	fclean all

.PHONY: fclean re clean all bonus
