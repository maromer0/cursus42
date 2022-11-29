# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maromero <maromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 15:30:29 by maromero          #+#    #+#              #
#    Updated: 2022/11/29 16:05:43 by maromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra
CC		= gcc
AR		= ar crs
RM		= rm -f

OBJS = $(MY_SOURCES:.c=.o)

MY_SOURCES = ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\

OBJS_B = $(MY_SOURCES_B:.c=.o)

MY_SOURCES_B = ft_lstnew.c\
			   ft_lstadd_front.c\
			   ft_lstsize.c\
			   ft_lstlast.c\
			   ft_lstadd_back.c\
			   ft_lstdelone.c\
			   ft_lstclear.c\
			   ft_lstiter.c\
			   ft_lstmap.c\

all : $(NAME)

${NAME}:	${OBJS} ${OBJS_B}
			${AR} ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJS_B}
			${AR} ${NAME} ${OBJS} ${OBJS_B}

clean:
		${RM} $(OBJS) $(OBJS_B)

fclean: clean
		${RM} $(NAME)

re: fclean all

.PHONY:		all clean fclean re bonus