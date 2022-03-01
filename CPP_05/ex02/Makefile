NAME	=	./Form
SRCS	=	main.cpp Bureaucrat.cpp Form.cpp \
			ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
CC		=	c++

%.o: %.cpp	$(HEADER)
			c++ $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME): 	$(OBJS) $(SRCS)
			$(CC) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)
			rm -f *txt_shrubbery

re:			fclean all

.PHONY:		all clean fclean re
