SRCS_PATH=srcs
OBJS_PATH=srcs
FLAGS=-Wall -Wextra -Werror
INCLUDES_PATH=includes
SRCS=ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS=${patsubst %.c,./${OBJS_PATH}/%.o,${SRCS}} 

teste:
	echo ${OBJS}
all: libft.a

libft.a: ${OBJS}
	ar rcs libft.a ${OBJS}

%.o: %.c
	cc -c $^ -o $@

clean:
	rm -rf ./${OBJS_PATH}/*.o

fclean: clean
	rm -rf *.a

re: fclean all