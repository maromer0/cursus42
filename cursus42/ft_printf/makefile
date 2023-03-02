# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maromero <maromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 20:06:33 by maromero          #+#    #+#              #
#    Updated: 2023/03/02 11:36:02 by maromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra
CC		= gcc
AR		= ar crs
RM		= rm -rf

OBJS = $(MY_SOURCES:.c=.o)

MY_SOURCES = ft_printf.c\
			ft_print_char.c\
			ft_print_hex.c\
			ft_print_mem.c\
			ft_print_num.c\
			ft_print_str.c\
			ft_print_uhex.c\
			ft_print_unsig.c\
			


all : $(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re