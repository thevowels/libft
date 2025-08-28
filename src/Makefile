NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c

INCLUDES = .

CFLAGS = -Wall -Wextra -Werror

AFLAGS = -rcs

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c -I $(INCLUDES) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
