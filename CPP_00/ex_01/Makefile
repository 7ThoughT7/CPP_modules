NAME	= PhoneBook

CPP		= clang++

CFLAGS		= -Wall -Wextra -Werror -I.

SRCS	= main.cpp PhoneBook.cpp Contact.cpp

OBJS	= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re