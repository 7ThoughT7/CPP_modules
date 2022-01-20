NAME	= Account

HEADER	= Account.hpp

CPP		= c++

CFLAGS		= -Wall -Wextra -Werror -I.

SRCS	= tests.cpp Account.cpp

%.o:%.cpp		$(HEADER)
		    c++ $(CFLAGS) -c $< -o $@

OBJS	= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
