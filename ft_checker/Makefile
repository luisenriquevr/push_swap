CC		=	gcc

NAME	=	checker

FLAGS	=	-Wall -Werror -Wextra -g

SRCS	=	ft_checker.c \
			ft_are_dup.c \
			ft_data_init.c \
			ft_n_counter.c \
			ft_operations_maker.c \
			ft_operations_reader.c \
			../get_next_line/get_next_line.c \
			../get_next_line/get_next_line_utils.c \
			../operations/ft_push.c \
			../operations/ft_rev_rotate.c \
			../operations/ft_rotate.c \
			../operations/ft_swap.c \
			../utils/ft_stack_creator.c \
			../utils/ft_stack_fill.c \
			../utils/ft_thegreatest.c \
			../utils/ft_thesmallest.c \
			../utils/ft_is_sorted.c

OBJS	=	${SRCS:.c=.o}

RM		=	rm -f

$(NAME) : $(OBJS)
		$(MAKE) -C ../libft
		$(CC) $(OBJS) ../libft/libft.a $(FLAGS) -o $(NAME)

all	:	$(NAME)

clean	:
		${RM} $(OBJS)

fclean	: clean 
		${RM} $(NAME)

re	: fclean all

%.o	: %.c
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)