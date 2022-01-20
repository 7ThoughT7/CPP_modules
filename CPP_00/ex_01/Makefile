NAME	= PhoneBook

HEADER	= Contact.hpp PhoneBook.hpp

CPP		= c++

CFLAGS		= -Wall -Wextra -Werror -I.

SRCS	= main.cpp PhoneBook.cpp Contact.cpp

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
