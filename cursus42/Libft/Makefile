# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maromero <maromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 15:30:29 by maromero          #+#    #+#              #
#    Updated: 2022/10/04 18:02:16 by maromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES = ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			mainalnum.c\

MY_OBJECTS = $(MY_SOURCES:.c=.o)

$(NAME):
		gcc $(CCFLAGS) -c $(MY_SOURCES) -I ./
		ar rc $(NAME) $(MY_OBJECTS)
all : $(NAME)

CCFLAGS += -Wall -Werror -Wextra
clean:
		rm -f $(MY_OBJECTS)
fclean: clean
		rm -f $(NAME)

re : fclean all