NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_CTYPE=	ft_isalpha.c ft_isdigit.c ft_islower.c ft_isupper.c ft_tolower.c \
			ft_toupper.c

SRC_PRINT = ft_putstr.c

SRC_MATH = ft_iseven.c ft_isodd.c

SRCS =

SRCS += $(addprefix ./src/ctype/, $(SRC_CTYPE))

SRCS += $(addprefix ./src/print/, $(SRC_PRINT))

SRCS += $(addprefix ./src/math/, $(SRC_MATH))

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
