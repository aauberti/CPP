NAME		= phonebook

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp \
			  PhoneBook.cpp \
			  Contact.cpp

OBJS		= $(SRCS:.cpp=.o)

HEADERS		= Contact.hpp \
			  PhoneBook.hpp

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HEADERS)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re