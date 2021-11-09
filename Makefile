CC = gcc -fsanitize=address
CFLAGS = -g -Wall -Wextra -Werror 

SRCMODULES_A = minishell.c
OBJMODULES_A = $(patsubst %.c,%.o,$(SRCMODULES_A))


all : minishell

minishell: $(OBJMODULES_A) minishell.h
		$(CC) $(CFLAGS) $(OBJMODULES_A) -o minishell

clean:
	rm -rf $(OBJMODULES_A)

fclean : clean
	rm -rf minishell
	
re : fclean all

.PHONY : all clean fclean re

#