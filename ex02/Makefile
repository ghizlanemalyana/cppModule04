cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp
objs = $(sources:.cpp=.o)
NAME = animal

all: $(NAME)

$(NAME): $(objs) 
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all