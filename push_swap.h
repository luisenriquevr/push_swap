/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:37:59 by lvarela            #+#    #+#             */
/*   Updated: 2021/11/08 19:09:51 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <math.h>

# include "./libft/libft.h"
# include "./get_next_line/get_next_line.h"

typedef struct s_data
{
	int			*stack_a;
	int			*stack_b;
	int			num_a;
	int			num_b;
	int			biggest_n;
	int			smallest_n;
	int			total_n;
}				t_data;

//checker
int	main(int argc, char **argv);
int	ft_are_dup(int *stack, int num);
int	ft_data_init(t_data *data, char **argv);
int	ft_n_counter(char **argv);
int	ft_operations_reader(t_list **operations);
int	ft_operations_maker(t_data *data, t_list **operations);

//utils
int	ft_stack_creator(int **stack, int *num_stack, int size);
int	ft_stack_fill(t_data *data, char **argv);
int	ft_thegreatest(int *stack, int stack_n);
int	ft_thesmallest(int *stack, int stack_n);
int	ft_is_a_sorted(t_data *data);
int	ft_is_b_sorted(t_data *data);
int	ft_midpoint(int *stack, int size);

//operations
int	ft_push_a(t_data *data, int i);
int	ft_push_b(t_data *data, int i);
int	ft_swap(int **stack, int num, char c);
int	ft_swap_ab(t_data *data, int i);
int	ft_rotate(int **stack, int num, char c);
int	ft_rotate_ab(t_data *data, int i);
int	ft_n_rotate(int **stack, int num, char c, int x);
int	ft_rev_rotate(int **stack, int num, char c);
int	ft_rev_rotate_ab(t_data *data, int i);
int	ft_n_rev_rotate(int **stack, int num, char c, int x);

//push_swap
int	main(int argc, char **argv);
int	ft_lets_sorted(t_data *data);
int	ft_sort3_a(int **stack, int num, char c);
int	ft_sort3_b(int **stack, int num, char c);
int	ft_sort05(t_data *data);
int	ft_sort100(t_data *data);

#endif
