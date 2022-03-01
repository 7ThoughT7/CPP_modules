NAME	= BrainAnimal

HEADER	= Animal.hpp Dog.hpp Cat.hpp Brain.hpp

CPP		= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

%.o:%.cpp		$(HEADER)
		    c++ $(CFLAGS) -c $< -o $@

OBJS	= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)	$(HEADER)
				$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re