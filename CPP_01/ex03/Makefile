NAME	= weapon

HEADER	= HumanA.hpp HumanB.hpp Weapon.hpp

CPP		= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS	= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test