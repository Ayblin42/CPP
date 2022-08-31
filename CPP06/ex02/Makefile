CC			=	c++

FLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

SRCS		=	main.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	dynamic

all			:		${NAME}

${NAME}		:	 ${OBJS}
				${CC} ${FLAGS} ${OBJS} -o ${NAME}

.cpp.o		:
				${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean		:
				${RM} ${OBJS}


fclean		:	clean
				${RM} ${NAME}


re			:	fclean	all

.PHONY		:	all clean fclean re
