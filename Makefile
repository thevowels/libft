NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_CTYPE= ft_isalpha.c

SRC_PRINT = ft_putstr.c


SRCS =

SRCS += $(addprefix ./src/c_type/, $(SRC_CTYPE))

SRCS += $(addprefix ./src/print/, $(SRC_PRINT))

OBJS = $(SRCS:.c=.o)


INCLUDES = -I includes

.c.o:
	@echo "Compiling to get $@"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME) 

$(NAME): $(OBJS) includes/libft.h Makefile
	@echo "Archiving to get $(NAME) "
	@ar -rcs $(NAME) $(OBJS)

clean:
	@echo "Cleaning Object Files"
	@rm -f $(OBJS)

fclean: clean
	@echo "Cleaning Lib file"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
