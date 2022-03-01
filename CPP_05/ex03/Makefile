NAME			= Intern

HEADER			= Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp\
				PresidentialPardonForm.hpp Intern.hpp

SRCS			= Bureaucrat.cpp Form.cpp	main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp\
        		PresidentialPardonForm.cpp Intern.cpp

CPP				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98


%.o:%.cpp		$(HEADER)
				c++ $(CFLAGS) -c $< -o $@

OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)	$(HEADER)
				$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				$(RM) *_shrubbery

re:				fclean $(NAME)

.PHONY:			all clean fclean re
