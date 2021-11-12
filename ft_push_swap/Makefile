CC		=	gcc

NAME	=	push_swap

FLAGS	=	-Wall -Werror -Wextra -g

SRCS	=	push_swap.c	\
			ft_lets_sorted.c \
			ft_sort03.c \
			ft_sort05.c \
			ft_sort100.c	\
			../ft_checker/ft_are_dup.c \
			../ft_checker/ft_data_init.c \
			../ft_checker/ft_n_counter.c \
			../operations/ft_push.c \
			../operations/ft_rev_rotate.c \
			../operations/ft_rotate.c \
			../operations/ft_swap.c \
			../utils/ft_stack_creator.c \
			../utils/ft_stack_fill.c \
			../utils/ft_thegreatest.c \
			../utils/ft_thesmallest.c \
			../utils/ft_is_sorted.c	\
			../utils/ft_midpoint.c

OBJS	=	$(SRCS:.c=.o)

RM		=	rm -f

$(NAME) : $(OBJS)
		$(MAKE) -C ../libft
		$(CC) $(OBJS) ../libft/libft.a $(FLAGS) -o $(NAME)

all	:	$(NAME)

clean	:
		${RM} ${OBJS}

fclean	: clean
		${RM} ${NAME}

re	: fclean all

%.o	: %.c
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)
