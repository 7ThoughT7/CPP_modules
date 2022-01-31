NAME	= zombie

HEADER	= Zombie.hpp

CPP		= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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