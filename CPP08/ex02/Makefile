# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 08:45:01 by ayblin            #+#    #+#              #
#    Updated: 2022/09/05 18:54:01 by ayblin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++

FLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

SRCS		=	main.cpp MutantStack.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	convert

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

