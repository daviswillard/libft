CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft
LIB = ${NAME}.a
SRCS = ft_memset.c ft_bzero.c \
      ft_memcpy.c ft_memccpy.c \
      ft_memcmp.c ft_memmove.c \
      ft_memchr.c ft_strlen.c \
      ft_isalpha.c ft_isdigit.c \
      ft_isalnum.c ft_isascii.c \
      ft_isprint.c ft_toupper.c \
      ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_substr.c \
      ft_strjoin.c ft_strtrim.c \
      ft_strncmp.c ft_strnstr.c \
      ft_calloc.c ft_strdup.c \
      ft_strlcpy.c ft_itoa.c \
      ft_strmapi.c ft_putchar_fd.c \
      ft_putstr_fd.c ft_putendl_fd.c \
      ft_putnbr_fd.c ft_strlcpy.c \
      ft_strlcat.c ft_atoi.c \
      ft_split.c
BNS = ft_lstnew ft_lstadd_front \
      ft_lstsize ft_lstlast \
      ft_lstadd_back ft_lstdelone \
      ft_lstclear ft_lstiter \
      ft_lstmap
OBJS = ${SRCS:.c=.o}
BNS_OBJS = ${BNS:.c=.o}
DEPS = libft.h
all: ${LIB}
.c.o: ${DEPS}
	${CC} ${CFLAGS} $< -o $@
${LIB}: $(OBJS) $(BNS_OBJS)
	ar -rc ${LIB} $^
	ranlib ${LIB}
clean:
	rm -f $(OBJS) $(BNS_OBJS)
fclean: clean
	rm -f ${LIB} ${NAME}
re:	fclean all
.PHONY:    all clean fclean re
