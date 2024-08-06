SRC = main.c  src/uti1.c src/uti2.c src/dict2.c src/dict1.c src/uti3.c src/rush02.c src/rush02_2.c src/uti4.c


OBJ = $(SRC:.c=.o)

COMP_FLAG = -Wall -Wextra -Werror -Iinclude -g

NAME = rush-02

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)

%.o: %.c
	cc $(COMP_FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
