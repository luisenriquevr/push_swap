/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:33:07 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:33:26 by lvarela          ###   ########.fr       */
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

	if (argc == 1)
		return (1);
	if (ft_data_init(&data, argv) || ft_are_dup(data.stack_a, data.num_a))
	{
		free(data.stack_a);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (ft_is_a_sorted(&data))
		ft_lets_sorted(&data);
	ft_stacks_free(&data);
	return (0);
}
