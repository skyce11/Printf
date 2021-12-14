

SRCS = ft_printf.c ft_hexa.c ft_auxs1.c

OBJS = ${SRCS:.c=.o}

HDRS = ft_printf.h

NAME = ft_printf.a

cc = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o: ${HDRS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
