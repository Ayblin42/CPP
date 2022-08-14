NAME		=	Replace

CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

SRCS		=	main.cpp \

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)


.cpp.o:
			$(CC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)


clean:
			$(RM) $(OBJS)


fclean:		clean
			$(RM) $(NAME)


re:			fclean all

.PHONY:		fclean, all, re
