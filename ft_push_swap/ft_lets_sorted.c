/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lets_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:36:03 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:36:04 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lets_sorted(t_data *data)
{
	if (data->num_a == 3)
		ft_sort3_a(&data->stack_a, data->num_a, 'a');
	else if (data->num_a == 2 && data->stack_a[0] > data->stack_a[1])
		ft_swap(&data->stack_a, data->num_a, 'a');
	else if (data->num_a > 3 && data->num_a < 7)
		ft_sort05(data);
	else if (data->num_a > 6)
		ft_sort100(data);
	return (0);
}
