/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:38:22 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:38:23 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_stacks_free(t_data *data)
{
	free((*data).stack_a);
	free((*data).stack_b);
}

int	main(int argc, char **argv)
{
	t_data	data;
	t_list	*operations;

	operations = NULL;
	if (argc == 1)
		return (1);
	if (ft_data_init(&data, argv) || ft_are_dup(data.stack_a, data.num_a))
	{
		free(data.stack_a);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (ft_operations_reader(&operations)
		|| ft_operations_maker(&data, &operations) == 1)
	{
		ft_stacks_free(&data);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (ft_is_a_sorted(&data))
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd("OK\n", 1);
	ft_stacks_free(&data);
	return (0);
}
