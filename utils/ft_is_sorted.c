/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:35:12 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 14:35:25 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_a_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->num_a - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_b_sorted(t_data *data)
{
	int	i;

	i = 1;
	while (i < data->num_b)
	{
		if (data->num_b <= 1)
			return (0);
		if (data->stack_b[i] < data->stack_b[i - 1])
			return (1);
		i++;
	}
	return (0);
}
