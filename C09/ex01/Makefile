SRC		= ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c

SRCS		= ${addprefix ${PRESRC}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRESRC		= ./srcs/

INCLUDES	= ./includes/

NAME		= libft.a

AR		= ar rc
RM		= rm -f
RANLIB		= ranlib
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra

all:		${NAME}

.c.o:		
		${CC} ${CFLAGS} -c -I ${INCLUDES} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
		${RANLIB} ${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re