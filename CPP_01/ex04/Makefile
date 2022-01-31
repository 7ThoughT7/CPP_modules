NAME			= replace

HEADER			= fileReplace.hpp

CPP				= c++

CFLAGS 			= -Wall -Wextra -Werror -std=c++98

SRCS 			= main.cpp fileReplace.cpp

OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(SRCS) $(HEADER)
				$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
				$(RM) $(NAME)

fclean:			clean

re:				fclean all

.PHONY:			all clean fclean re