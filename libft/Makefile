SRC = ft_lstadd_back.c ft_lstnew.c ft_isspace.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstfree_all.c	
SRCBONUS = ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = ${SRC:.c=.o}

OBJBONUS = ${SRCBONUS:.c=.o}

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME):
		${CC} ${FLAGS} -c ${SRC}
		ar rc ${NAME}	${OBJ}
		ranlib ${NAME}

bonus:	
		${CC} ${FLAGS} -c ${SRC} ${SRCBONUS}
		ar rc ${NAME}	${OBJ} ${OBJBONUS}
		ranlib ${NAME}

clean:
		rm -f ${OBJ} ${OBJBONUS}

fclean: clean
		rm -f ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re
