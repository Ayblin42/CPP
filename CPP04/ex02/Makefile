CC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

SRCS		=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	a.out

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
