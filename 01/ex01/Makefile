NAME = program



GREEN = \033[32m
RED = \033[31m
RESET = \033[0m
CANCEL = \033[1A\033[K



CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -gdwarf-4

MAKEFLAGS += -s



SRCS =	main.cpp		\
		Zombie.cpp		\
		zombieHorde.cpp	\

OBJDIR = obj
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)



$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	printf "\n$(CANCEL)"
	printf "$(GREEN)$(NAME) compiled!\n$(RESET)"

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	printf "$(GREEN)Generating $(NAME) objects... %-33.33s\r$(RESET)" $@
	$(CXX) $(CXXFLAGS) -c $< -o $@



all: $(NAME)

clean:
	rm -rf $(OBJDIR)
	printf "$(RED)$(NAME) objects deleted!$(RESET)\n"

fclean: clean
	rm -rf $(NAME)
	printf "$(RED)$(NAME) and objects deleted!$(RESET)\n"

re: fclean all



.PHONY: all clean fclean re
