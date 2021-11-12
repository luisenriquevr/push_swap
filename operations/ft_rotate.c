/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:31:32 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 14:32:45 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rotate(int **stack, int num, char c)
{
	int	i;
	int	*aux;

	if (num < 2)
		return (1);
	i = 0;
	if (ft_stack_creator(&aux, &num, num))
		return (1);
	aux[num - 1] = (*stack)[0];
	while (i < num - 1)
	{
		aux[i] = (*stack)[i + 1];
		i++;
	}
	free((*stack));
	*stack = aux;
	if (c != '\0')
	{
		write(1, "r", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	return (0);
}

int	ft_rotate_ab(t_data *data, int i)
{
	if (ft_rotate(&data->stack_a, data->num_a, '\0'))
		return (1);
	if (ft_rotate(&data->stack_b, data->num_b, '\0'))
		return (1);
	if (i == 1)
		write(1, "rr\n", 3);
	return (0);
}

int	ft_n_rotate(int **stack, int num, char c, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (ft_rotate(stack, num, c))
			return (1);
		i++;
	}
	return (0);
}
