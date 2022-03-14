
NAME = libftprintf.a

BONUS_ALL = libftprintf.a

SRCS = srcs/ft_convert_indicator.c srcs/ft_print_char.c \
srcs/ft_print_uinteger.c srcs/ft_eval_format.c srcs/ft_print_hex.c \
srcs/ft_printf.c srcs/ft_final_alignement_i.c srcs/ft_print_integer.c \
srcs/ft_tolowerstr.c srcs/ft_initialize_tab.c srcs/ft_print_percent.c \
srcs/ft_utoa.c srcs/ft_print_address.c srcs/ft_print_str.c srcs/ft_utoa_base.c\
libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c \
libft/ft_isprint.c libft/ft_strlen.c libft/ft_memset.c libft/ft_bzero.c \
libft/ft_memcpy.c libft/ft_memmove.c libft/ft_strlcpy.c \
libft/ft_strlcat.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_strchr.c \
libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_memchr.c libft/ft_memcmp.c \
libft/ft_strnstr.c libft/ft_atoi.c libft/ft_calloc.c libft/ft_strdup.c \
libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c \
libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c libft/ft_striteri.c \
libft/ft_putchar_fd.c \
libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
