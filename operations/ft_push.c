/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:24:40 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 14:25:29 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push(int **stack_take, int **stack_put,
	int *num_take, int *num_put)
{
	int	*tmp_put;
	int	*tmp_take;
	int	i;

	i = 1;
	ft_stack_creator(&tmp_put, num_put, *num_put + 1);
	ft_stack_creator(&tmp_take, num_take, *num_take - 1);
	tmp_put[0] = (*stack_take)[0];
	while (i < *num_put)
	{
		tmp_put[i] = (*stack_put)[i - 1];
		i++;
	}
	i = 0;
	while (i < *num_take)
	{
		tmp_take[i] = (*stack_take)[i + 1];
		i++;
	}
	free((*stack_take));
	free((*stack_put));
	(*stack_take) = tmp_take;
	(*stack_put) = tmp_put;
}

int	ft_push_a(t_data *data, int i)
{
	if (data->num_b < 1)
		return (1);
	ft_push(&data->stack_b, &data->stack_a, &data->num_b, &data->num_a);
	if (i == 1)
		write(1, "pa\n", 3);
	return (0);
}

int	ft_push_b(t_data *data, int i)
{
	if (data->num_a < 1)
		return (1);
	ft_push(&data->stack_a, &data->stack_b, &data->num_a, &data->num_b);
	if (i == 1)
		write(1, "pb\n", 3);
	return (0);
}
