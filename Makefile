CC = gcc 
CFLAGS = -g -Wall -Wextra -Werror
LIBFT_DIR = ./libft/*.o
LIBFT = ./libft/libft.a

SRCMODULES_A = buildins/ft_cd.c \
				minishell.c
OBJMODULES_A = $(patsubst %.c,%.o,$(SRCMODULES_A))


all : minishell

minishell: $(OBJMODULES_A) $(LIBFT) minishell.h
		$(CC) $(CFLAGS) $(OBJMODULES_A) $(LIBFT) -o minishell

.FORCE :

$(LIBFT): .FORCE
	make -C ./libft

clean:
	rm -rf $(OBJMODULES_A)

fclean : clean
	rm -rf minishell
	
re : fclean all

.PHONY : all clean fclean re

#-fsanitize=address