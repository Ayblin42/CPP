CC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

SRCS		=	megaphone.cpp

OBJS		=	${SRCS:.c=.o}

NAME		=	megaphone

all			:		${NAME}

${NAME}		:	 ${OBJS}
				${CC} ${FLAGS} ${OBJS} -o ${NAME}

.c.o		:
				${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean		:
				${RM} ${OBJS}


fclean		:	clean
				${RM} ${NAME}


re			:	fclean	all

.PHONY		:	all clean fclean re libft
