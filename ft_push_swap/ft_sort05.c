/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:36:24 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:36:25 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort05b(t_data *data)
{
	while (data->num_b)
	{
		if (data->num_b == 3)
		{
			ft_sort3_b(&data->stack_b, data->num_b, 'b');
			ft_push_a(data, 1);
		}
		else if (data->stack_b[0] < data->stack_b[1])
			ft_swap(&data->stack_b, data->num_b, 'b');
		ft_push_a(data, 1);
	}
	return (0);
}

int	ft_sort05(t_data *data)
{
	int		mid;
	int		i;

	i = 0;
	mid = ft_midpoint(data->stack_a, data->num_a);
	while (i <= data->num_a)
	{
		if (data->stack_a[0] < mid)
			ft_push_b(data, 1);
		else if (data->stack_a[data->num_a - 1] < mid)
		{
			ft_rev_rotate(&data->stack_a, data->num_a, 'a');
			ft_push_b(data, 1);
		}
		else
			ft_rotate(&data->stack_a, data->num_a, 'a');
		i++;
	}
	ft_sort3_a(&data->stack_a, data->num_a, 'a');
	ft_sort05b(data);
	return (0);
}
