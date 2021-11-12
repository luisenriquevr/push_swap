/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_creator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:51:05 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 14:52:52 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_creator(int **stack, int *num_stack, int size)
{
	(*stack) = (int *)malloc(sizeof(int) * size);
	if (!(*stack))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (num_stack != NULL)
		*num_stack = size;
	return (0);
}
