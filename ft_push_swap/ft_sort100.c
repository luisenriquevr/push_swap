/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:37:18 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:37:19 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rot_push(t_data *data, int i, char x)
{
	if (x == 'a')
	{
		ft_n_rotate(&data->stack_a, data->num_a, 'a', i);
		ft_push_b(data, 1);
	}
	if (x == 'b')
	{
		ft_n_rotate(&data->stack_b, data->num_b, 'b', i);
		ft_push_a(data, 1);
	}
	return (0);
}

int	ft_rev_rot_push(t_data *data, int i, char x)
{
	if (x == 'a')
	{
		ft_n_rev_rotate(&data->stack_a, data->num_a, 'a', i + 1);
		ft_push_b(data, 1);
	}
	if (x == 'b')
	{
		ft_n_rev_rotate(&data->stack_b, data->num_b, 'b', i + 1);
		ft_push_a(data, 1);
	}
	return (0);
}

int	ft_sort100b(t_data *data)
{
	int	i;
	int	the_greatest;

	if (ft_is_a_sorted(data) == 0)
	{
		while (data->num_b)
		{
			i = 0;
			the_greatest = ft_thegreatest(data->stack_b, data->num_b);
			while (i < data->num_b)
			{
				if (data->stack_b[i] == the_greatest)
					i = ft_rot_push(data, i, 'b');
				else if (data->stack_b[data->num_b - 1 - i] == the_greatest)
					i = ft_rev_rot_push(data, i, 'b');
				else
					i++;
			}
		}
	}
	return (0);
}

int	ft_sort100(t_data *data)
{
	int	i;
	int	midpoint;

	i = 0;
	if (data->num_a > 3 && ft_is_a_sorted(data))
	{
		midpoint = ft_midpoint(data->stack_a, data->num_a);
		if (data->num_a <= 3 )
			ft_sort3_a(&data->stack_a, data->num_a, 'a');
		while (i < data->num_a && data->num_a > 3)
		{
			if (data->stack_a[i] < midpoint)
				i = ft_rot_push(data, i, 'a');
			else if (data->stack_a[data->num_a - i - 1] < midpoint)
				i = ft_rev_rot_push(data, i, 'a');
			else
				i++;
		}
		if (data->num_a <= 3 )
			ft_sort3_a(&data->stack_a, data->num_a, 'a');
	}
	ft_sort100b(data);
	while ((ft_is_b_sorted(data)) && data->num_b)
		ft_sort100(data);
	return (0);
}
