SRCS  =  ./srcs/ft_wichprint.c ./srcs/main.c ./srcs/ft_put.c ./srcs/ft_ret_to_tab.c ./srcs/is_unsigned_number.c ./srcs/ft_ret_to_t.c ./srcs/ft_print.c
OBJS  = ${SRCS:.c=.o}
INCS  = includes
NAME  = rush-02
CC    = gcc
RM    = rm -f
CFLAGS  = -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

run :
	./${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o test
