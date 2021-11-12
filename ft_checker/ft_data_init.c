/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:38:27 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:38:28 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_data_init(t_data *data, char **argv)
{
	ft_stack_creator(&data->stack_a, &data->num_a, ft_n_counter(argv));
	if (ft_stack_fill(data, argv) == 1)
		return (1);
	data->stack_b = NULL;
	data->num_b = 0;
	data->total_n = data->num_a;
	data->biggest_n = ft_thegreatest(data->stack_a, data->num_a);
	data->smallest_n = ft_thesmallest(data->stack_a, data->num_a);
	return (0);
}
