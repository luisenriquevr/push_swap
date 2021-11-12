
CC		=	gcc

NAME	=	push_swap

FLAGS	=	-Wall -Werror -Wextra -gcc

SRCS	=

OBJS	=	$(SRCS:.c=.o)

$(NAME)	: $(OBJS)
		@cd libft && $(MAKE)
		@cp libft/libft.a libft.a
		@$(MAKE) -C ft_push_swap
		@cp ft_push_swap/push_swap push_swap
		@$(MAKE) -C ft_checker
		@cp ft_checker/checker checker

all	:	$(NAME)

clean	:
		$(MAKE) clean -C ./libft
		$(MAKE) clean -C ./ft_push_swap
		$(MAKE) clean -C ./ft_checker

fclean : clean
		rm -f libft.a
		rm -f push_swap
		rm -f checker
		$(MAKE) fclean -C ./libft
		$(MAKE)	fclean -C ./ft_push_swap
		$(MAKE) fclean -C ./ft_checker
		
re		:	fclean all

%.o		:	%.c
		$(CC) $(FLAGS) -c $<  -o $(<:.c=.o)