NAME	=	libft.a

CC	=	clang
CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -f

AR	=	ar
ARFLAGS = rcs

INCLUDE	=	libft.h
SOURCES	=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_tolower.c ft_isdigit.c \
			ft_isprint.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memset.c \
			ft_strchr.c ft_strlcat.c ft_toupper.c ft_strlcpy.c ft_strlen.c \
			ft_strncmp.c ft_calloc.c ft_strrchr.c ft_memmove.c ft_strdup.c \
			ft_strnstr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_strtrim.c \
			ft_substr.c ft_split.c ft_itoa.c ft_striteri.c ft_itoa_base.c

OBJECTS	=	$(SOURCES:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

.c.o:	$(CC) (CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
