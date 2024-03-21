NAME := libftprintf.a
FLAGS := -Wall -Wextra -Werror
FILES := ft_printf.c ft_printf_dec.c ft_printf_char.c ft_printf_hex.c ft_printf_str.c \
	 ft_printf_unsigned_dec.c ft_printf_ptr.c
OBJ_FILES := $(FILES:.c=.o)
LIBFT := libft
all: $(NAME)

a:
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
clean:
	make clean -C $(LIBFT)
	rm -f $(OBJ_FILES)
fclean: clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)
re: fclean all

obj:
	cc $(FLAGS) -c $(FILES)
$(NAME): obj a
	ar -rcs $(NAME) $(OBJ_FILES)

