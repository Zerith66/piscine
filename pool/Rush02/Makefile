NAME : Rush02
CC : gcc
CFLAGS = -Wall -Wextra -Werror
FILES = fonction.c Rush02.c main.c
OBJ = $(SRC:.c=.o)

all : 
$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
	
re : fclean all