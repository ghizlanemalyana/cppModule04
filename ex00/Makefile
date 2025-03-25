cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
objs = $(sources:.cpp=.o)
NAME = animal

all: $(NAME)

$(NAME): $(objs) 
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all