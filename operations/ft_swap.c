/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:08 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 14:29:38 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_swap(int **stack, int num, char c)
{
	int	*aux;
	int	i;

	if (num < 2)
		return (1);
	if (ft_stack_creator(&aux, &num, num))
		return (1);
	i = 2;
	aux[0] = (*stack)[1];
	aux[1] = (*stack)[0];
	while (i < num)
	{
		aux[i] = (*stack)[i];
		i++;
	}
	free((*stack));
	(*stack) = aux;
	if (c != '\0')
	{
		write(1, "s", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	return (0);
}

int	ft_swap_ab(t_data *data, int i)
{
	if (ft_swap(&data->stack_a, data->num_a, '\0'))
		return (1);
	if (ft_swap(&data->stack_b, data->num_b, '\0'))
		return (1);
	if (i == 1)
		write(1, "ss\n", 3);
	return (0);
}
