# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migonzal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 11:23:04 by migonzal          #+#    #+#              #
#    Updated: 2021/12/18 09:53:32 by migonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = ft_printf.c ft_auxs2.c ft_auxs1.c

OBJS = ${SRCS:.c=.o}

HDRS = ft_printf.h

NAME = libftprintf.a

cc = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o: ${HDRS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
