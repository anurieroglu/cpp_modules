SRCS = main.cpp
NAME = sed
C++ = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRCS)
		$(C++) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

.PHONY: clean fclean all