SRCS  = srcs/main.c srcs/calc.c srcs/utils.c
OBJS  = ${SRCS:.c=.o}
INCS  = includes
NAME  = do-op
CC    = gcc
RM    = rm -f
CFLAGS  = -Wall -Wextra -Werror

.c.o: ${OBJS}
	${CC} ${CFLAGS} -c -I ${INCS} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
