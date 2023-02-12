# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maromero <maromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 20:06:33 by maromero          #+#    #+#              #
#    Updated: 2023/02/12 20:11:48 by maromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra
CC		= gcc
AR		= ar crs
RM		= rm -rf

OBJS = $(MY_SOURCES:.c=.o)

MY_SOURCES = ft_printf.c\
			


all : $(NAME)

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
		${RM} $(OBJS)

fclean: clean
		${RM} $(NAME)

re: fclean all

.PHONY:		all clean fclean re