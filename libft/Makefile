# El nombre del archivo de la biblioteca que se va a crear
NAME = libft.a

# El compilador que se va a usar
CC = gcc

# Las opciones del compilador
CFLAGS = -Wall -Wextra -Werror

# Los archivos fuente que se van a compilar
SOURCE =	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_itoa.c \
			ft_split.c \
			ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

# Los archivos objeto que se van a generar a partir de los archivos fuente
OBJECTS = $(SOURCE:.c=.o)

# Regla para crear la biblioteca
$(NAME): $(OBJECTS)
	@ar crs $(NAME) $(OBJECTS)

# Regla para compilar todo
all: $(NAME)

# Regla para compilar cada archivo .c en un archivo .o
%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $< // Compila el archivo .c en un archivo .o
	
# Regla para limpiar los archivos objeto
clean:
	@$(RM) $(OBJECTS) 

# Regla para limpiar todo, incluyendo la biblioteca
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re: fclean all

# Reglas que no corresponden a archivos
.PHONY: all clean fclean re
